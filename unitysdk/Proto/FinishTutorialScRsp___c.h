#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class FinishTutorialScRsp; }

#define PROTO_FINISHTUTORIALSCRSP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD34960)
#define PROTO_FINISHTUTORIALSCRSP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD349A0)
#define PROTO_FINISHTUTORIALSCRSP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DD349B0)

namespace Proto
{
	inline static constexpr unsigned int FinishTutorialScRsp___c_TypeDefinitionIndex = 34395;

	class FinishTutorialScRsp___c : public ::System::Object
	{
	public:
		static ::Proto::FinishTutorialScRsp___c** StaticGet___9()
		{
			return (::Proto::FinishTutorialScRsp___c**)Il2CppClass::FromTypeDefinitionIndex(FinishTutorialScRsp___c_TypeDefinitionIndex)->GetStaticField(0x5A400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP___C__CTOR_OFFSET))(this);
		}

		::Proto::FinishTutorialScRsp* __cctor_b__28_0()
		{
			return ((::Proto::FinishTutorialScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALSCRSP___C___CCTOR_B__28_0_OFFSET))(this);
		}
	};
}
