#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class TutorialGuide; }

#define PROTO_TUTORIALGUIDE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D982280)
#define PROTO_TUTORIALGUIDE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9822B0)
#define PROTO_TUTORIALGUIDE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1D9822C0)

namespace Proto
{
	inline static constexpr unsigned int TutorialGuide___c_TypeDefinitionIndex = 34375;

	class TutorialGuide___c : public ::System::Object
	{
	public:
		static ::Proto::TutorialGuide___c** StaticGet___9()
		{
			return (::Proto::TutorialGuide___c**)Il2CppClass::FromTypeDefinitionIndex(TutorialGuide___c_TypeDefinitionIndex)->GetStaticField(0x9B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE___C__CTOR_OFFSET))(this);
		}

		::Proto::TutorialGuide* __cctor_b__33_0()
		{
			return ((::Proto::TutorialGuide*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE___C___CCTOR_B__33_0_OFFSET))(this);
		}
	};
}
