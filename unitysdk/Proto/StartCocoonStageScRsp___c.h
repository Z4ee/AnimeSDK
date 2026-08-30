#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class StartCocoonStageScRsp; }

#define PROTO_STARTCOCOONSTAGESCRSP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD555C0)
#define PROTO_STARTCOCOONSTAGESCRSP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD55600)
#define PROTO_STARTCOCOONSTAGESCRSP___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1DD55610)

namespace Proto
{
	inline static constexpr unsigned int StartCocoonStageScRsp___c_TypeDefinitionIndex = 33384;

	class StartCocoonStageScRsp___c : public ::System::Object
	{
	public:
		static ::Proto::StartCocoonStageScRsp___c** StaticGet___9()
		{
			return (::Proto::StartCocoonStageScRsp___c**)Il2CppClass::FromTypeDefinitionIndex(StartCocoonStageScRsp___c_TypeDefinitionIndex)->GetStaticField(0x5C880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP___C__CTOR_OFFSET))(this);
		}

		::Proto::StartCocoonStageScRsp* __cctor_b__48_0()
		{
			return ((::Proto::StartCocoonStageScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP___C___CCTOR_B__48_0_OFFSET))(this);
		}
	};
}
