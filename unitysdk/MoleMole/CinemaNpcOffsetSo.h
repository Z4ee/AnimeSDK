#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class CameraPositionData; }
namespace MoleMole { class GameObjectPositionData; }
namespace MoleMole { class PerformerPositionData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CINEMANPCOFFSETSO_GET_CAMERADICT_OFFSET UNITYSDK_OFFSET(0x116DECC0)
#define MOLEMOLE_CINEMANPCOFFSETSO_GET_PERFORMERDICT_OFFSET UNITYSDK_OFFSET(0x116DECB0)
#define MOLEMOLE_CINEMANPCOFFSETSO_METHOD_3_2743A86F7ED02B57_OFFSET UNITYSDK_OFFSET(0x116DF730)
#define MOLEMOLE_CINEMANPCOFFSETSO_METHOD_3_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x116DF0A0)
#define MOLEMOLE_CINEMANPCOFFSETSO_METHOD_3_8742561A34E04513_OFFSET UNITYSDK_OFFSET(0x116DFD60)
#define MOLEMOLE_CINEMANPCOFFSETSO_METHOD_3_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x116DEC40)
#define MOLEMOLE_CINEMANPCOFFSETSO_METHOD_3_A58A5891DF8333A9_OFFSET UNITYSDK_OFFSET(0x116DF950)
#define MOLEMOLE_CINEMANPCOFFSETSO_METHOD_3_C52D573361C61419_OFFSET UNITYSDK_OFFSET(0x116DEDB0)
#define MOLEMOLE_CINEMANPCOFFSETSO_METHOD_3_DDB7BEE00B17AB42_OFFSET UNITYSDK_OFFSET(0x116DFB60)
#define MOLEMOLE_CINEMANPCOFFSETSO__CTOR_OFFSET UNITYSDK_OFFSET(0x116DECD0)

namespace MoleMole
{
	inline static constexpr unsigned int CinemaNpcOffsetSo_TypeDefinitionIndex = 73481;

	class CinemaNpcOffsetSo : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::PerformerPositionData*>* _performerDatas; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PerformerPositionData*>* _performerDict; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::CameraPositionData*>*>* _cameraDict; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMANPCOFFSETSO__CTOR_OFFSET))(this);
		}

		::System::String* Method_3_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMANPCOFFSETSO_METHOD_3_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PerformerPositionData*>* get_PerformerDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PerformerPositionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMANPCOFFSETSO_GET_PERFORMERDICT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::CameraPositionData*>*>* get_CameraDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::CameraPositionData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMANPCOFFSETSO_GET_CAMERADICT_OFFSET))(this);
		}

		::MoleMole::PerformerPositionData* Method_3_C52D573361C61419(::System::Int32 a1)
		{
			return ((::MoleMole::PerformerPositionData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMANPCOFFSETSO_METHOD_3_C52D573361C61419_OFFSET))(this, a1);
		}

		::System::Void Method_3_6D93101E4CE10A96()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMANPCOFFSETSO_METHOD_3_6D93101E4CE10A96_OFFSET))(this);
		}

		::MoleMole::GameObjectPositionData* Method_3_2743A86F7ED02B57(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::MoleMole::GameObjectPositionData*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMANPCOFFSETSO_METHOD_3_2743A86F7ED02B57_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::MoleMole::GameObjectPositionData*>* Method_3_A58A5891DF8333A9(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::GameObjectPositionData*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMANPCOFFSETSO_METHOD_3_A58A5891DF8333A9_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_DDB7BEE00B17AB42(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMANPCOFFSETSO_METHOD_3_DDB7BEE00B17AB42_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::MoleMole::CameraPositionData* Method_3_8742561A34E04513(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::MoleMole::CameraPositionData*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMANPCOFFSETSO_METHOD_3_8742561A34E04513_OFFSET))(this, a1, a2);
		}
	};
}
