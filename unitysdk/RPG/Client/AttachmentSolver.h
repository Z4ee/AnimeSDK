#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class AttachmentBone; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ATTACHMENTSOLVER_METHOD_1_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x19B3E3E0)
#define RPG_CLIENT_ATTACHMENTSOLVER_METHOD_1_609FA3D38FA252B6_OFFSET UNITYSDK_OFFSET(0x19B3E810)
#define RPG_CLIENT_ATTACHMENTSOLVER_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19B3ECC0)
#define RPG_CLIENT_ATTACHMENTSOLVER_METHOD_1_CAFFF01C1C13C35B_OFFSET UNITYSDK_OFFSET(0x19B3E160)
#define RPG_CLIENT_ATTACHMENTSOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x19B3ED00)

namespace RPG::Client
{
	inline static constexpr unsigned int AttachmentSolver_TypeDefinitionIndex = 65394;

	class AttachmentSolver : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::AttachmentBone*>* Attachments; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* _RelativeMatrix; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHMENTSOLVER__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_CAFFF01C1C13C35B(::RPG::Client::AttachPointMapping* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHMENTSOLVER_METHOD_1_CAFFF01C1C13C35B_OFFSET))(this, a1);
		}

		::System::Void Method_1_2CBE0B79DD36047E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHMENTSOLVER_METHOD_1_2CBE0B79DD36047E_OFFSET))(this);
		}

		::System::Void Method_1_609FA3D38FA252B6(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHMENTSOLVER_METHOD_1_609FA3D38FA252B6_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHMENTSOLVER_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
