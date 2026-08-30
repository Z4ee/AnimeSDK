#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class AssistSimpleInfo; }

#define PROTO_ASSISTSIMPLEINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E056FC0)
#define PROTO_ASSISTSIMPLEINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E056FF0)
#define PROTO_ASSISTSIMPLEINFO___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E057000)

namespace Proto
{
	inline static constexpr unsigned int AssistSimpleInfo___c_TypeDefinitionIndex = 28339;

	class AssistSimpleInfo___c : public ::System::Object
	{
	public:
		static ::Proto::AssistSimpleInfo___c** StaticGet___9()
		{
			return (::Proto::AssistSimpleInfo___c**)Il2CppClass::FromTypeDefinitionIndex(AssistSimpleInfo___c_TypeDefinitionIndex)->GetStaticField(0x59460);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO___C__CTOR_OFFSET))(this);
		}

		::Proto::AssistSimpleInfo* __cctor_b__38_0()
		{
			return ((::Proto::AssistSimpleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO___C___CCTOR_B__38_0_OFFSET))(this);
		}
	};
}
