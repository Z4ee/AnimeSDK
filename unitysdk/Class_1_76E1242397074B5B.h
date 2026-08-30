#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TutorialGuideShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TutorialTriggerParam; }

#define CLASS_1_76E1242397074B5B_METHOD_1_1F29F81CADD13A09_OFFSET UNITYSDK_OFFSET(0x1C8C91A0)
#define CLASS_1_76E1242397074B5B__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8C9520)

inline static constexpr unsigned int Class_1_76E1242397074B5B_TypeDefinitionIndex = 15224;

class Class_1_76E1242397074B5B : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* BHHPLHIGOHE; // 0x10
	::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* JMDGIBDPMJF; // 0x18
	::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* JNDOMOJHOEF; // 0x20
	::System::UInt32 LLDCHLHNADA; // 0x28
	::System::UInt32 ODEKADIBFAO; // 0x2C
	::System::Boolean LPBKPCCKFJG; // 0x30
	::RPG::Client::TextID HNLJKFJOACC; // 0x38
	::RPG::GameCore::TutorialGuideShowType JMLNPBDIHDG; // 0x48
	::System::UInt32 FLBGELFEBCK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76E1242397074B5B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1F29F81CADD13A09(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_76E1242397074B5B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_76E1242397074B5B*&))((::PBYTE)hIl2Cpp + CLASS_1_76E1242397074B5B_METHOD_1_1F29F81CADD13A09_OFFSET))(a1, a2);
	}
};
