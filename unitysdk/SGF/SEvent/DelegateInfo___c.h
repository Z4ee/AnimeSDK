#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SGF_SEVENT_DELEGATEINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8A6630)
#define SGF_SEVENT_DELEGATEINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A6670)
#define SGF_SEVENT_DELEGATEINFO___C__GETFRIENDLYTYPENAME_B__42_0_OFFSET UNITYSDK_OFFSET(0x1B8A6680)

namespace SGF::SEvent
{
	inline static constexpr unsigned int DelegateInfo___c_TypeDefinitionIndex = 8290;

	class DelegateInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Type*, ::System::String*>** StaticGet___9__42_0()
		{
			return (::System::Func_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DelegateInfo___c_TypeDefinitionIndex)->GetStaticField(0x7070);
		}
		static ::SGF::SEvent::DelegateInfo___c** StaticGet___9()
		{
			return (::SGF::SEvent::DelegateInfo___c**)Il2CppClass::FromTypeDefinitionIndex(DelegateInfo___c_TypeDefinitionIndex)->GetStaticField(0x7078);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO___C__CTOR_OFFSET))(this);
		}

		::System::String* _GetFriendlyTypeName_b__42_0(::System::Type* t)
		{
			return ((::System::String*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO___C__GETFRIENDLYTYPENAME_B__42_0_OFFSET))(this, t);
		}
	};
}
