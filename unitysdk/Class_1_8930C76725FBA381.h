#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_328B10E9F3553A0D;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }

#define CLASS_1_8930C76725FBA381_METHOD_1_7D22C492B89AB325_OFFSET UNITYSDK_OFFSET(0x166AE010)
#define CLASS_1_8930C76725FBA381_METHOD_1_8425719515333CB7_OFFSET UNITYSDK_OFFSET(0x166AE020)

inline static constexpr unsigned int Class_1_8930C76725FBA381_TypeDefinitionIndex = 69776;

class Class_1_8930C76725FBA381 : public ::System::Object
{
public:
	static ::Class_1_328B10E9F3553A0D* Method_1_7D22C492B89AB325(::Class_1_328B10E9F3553A0D* a1, ::MoleMole::UIMainCityChatPlayContext* a2)
	{
		return ((::Class_1_328B10E9F3553A0D*(*)(::Class_1_328B10E9F3553A0D*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + CLASS_1_8930C76725FBA381_METHOD_1_7D22C492B89AB325_OFFSET))(a1, a2);
	}

	static ::Class_1_328B10E9F3553A0D* Method_1_8425719515333CB7(::Class_1_328B10E9F3553A0D* a1, ::MoleMole::UIBaseChatPlayController* a2)
	{
		return ((::Class_1_328B10E9F3553A0D*(*)(::Class_1_328B10E9F3553A0D*, ::MoleMole::UIBaseChatPlayController*))((::PBYTE)hIl2Cpp + CLASS_1_8930C76725FBA381_METHOD_1_8425719515333CB7_OFFSET))(a1, a2);
	}
};
