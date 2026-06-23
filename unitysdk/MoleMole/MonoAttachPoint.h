#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class AttachPoint; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOATTACHPOINT_EMPTY_OFFSET UNITYSDK_OFFSET(0x1582EC80)
#define MOLEMOLE_MONOATTACHPOINT_GETATTACHPOINTTRANSBYNAME_OFFSET UNITYSDK_OFFSET(0x1582E9A0)
#define MOLEMOLE_MONOATTACHPOINT_GETCOMPONENTSAFELY_OFFSET UNITYSDK_OFFSET(0x1582ED90)
#define MOLEMOLE_MONOATTACHPOINT_METHOD_5_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x1582F0A0)
#define MOLEMOLE_MONOATTACHPOINT_METHOD_5_E1B59F840D6D6F1F_OFFSET UNITYSDK_OFFSET(0x1582F040)
#define MOLEMOLE_MONOATTACHPOINT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1582E760)
#define MOLEMOLE_MONOATTACHPOINT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1582E590)
#define MOLEMOLE_MONOATTACHPOINT_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x1582E820)
#define MOLEMOLE_MONOATTACHPOINT_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x1582E650)
#define MOLEMOLE_MONOATTACHPOINT_REMOVEITEMBYNAME_OFFSET UNITYSDK_OFFSET(0x1582EAD0)
#define MOLEMOLE_MONOATTACHPOINT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1582EFA0)
#define MOLEMOLE_MONOATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1582EEC0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoAttachPoint_TypeDefinitionIndex = 84401;

	class MonoAttachPoint : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoAttachPoint*>** StaticGet_Field_5_2()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoAttachPoint*>**)Il2CppClass::FromTypeDefinitionIndex(MonoAttachPoint_TypeDefinitionIndex)->GetStaticField(0x3C4B0);
		}
		::System::Boolean AlawaysNeedAttachPointsPosition; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::AttachPoint*>* attachPointList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOATTACHPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOATTACHPOINT__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOATTACHPOINT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOATTACHPOINT_ONDISABLE_OFFSET))(this);
		}

		::UnityEngine::Transform* GetAttachPointTransByName(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOATTACHPOINT_GETATTACHPOINTTRANSBYNAME_OFFSET))(this, a1);
		}

		::System::Void RemoveItemByName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOATTACHPOINT_REMOVEITEMBYNAME_OFFSET))(this, a1);
		}

		static ::System::Void Empty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOATTACHPOINT_EMPTY_OFFSET))();
		}

		static ::MoleMole::MonoAttachPoint* GetComponentSafely(::System::Int32 a1)
		{
			return ((::MoleMole::MonoAttachPoint*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOATTACHPOINT_GETCOMPONENTSAFELY_OFFSET))(a1);
		}

		::System::Void OnRealEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOATTACHPOINT_ONREALENABLE_OFFSET))(this);
		}

		::System::Void OnRealDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOATTACHPOINT_ONREALDISABLE_OFFSET))(this);
		}

		::System::Void Method_5_E1B59F840D6D6F1F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOATTACHPOINT_METHOD_5_E1B59F840D6D6F1F_OFFSET))(this);
		}

		::System::Void Method_5_E11AC65AA0DC2249()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOATTACHPOINT_METHOD_5_E11AC65AA0DC2249_OFFSET))(this);
		}
	};
}
