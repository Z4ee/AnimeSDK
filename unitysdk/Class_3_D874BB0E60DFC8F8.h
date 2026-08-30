#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_D874BB0E60DFC8F8_METHOD_3_469ECD10EF199C13_OFFSET UNITYSDK_OFFSET(0x1CBE50D0)
#define CLASS_3_D874BB0E60DFC8F8_METHOD_3_9E3D0C5F7C38F16C_OFFSET UNITYSDK_OFFSET(0x1CBE5090)
#define CLASS_3_D874BB0E60DFC8F8__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBE50C0)

inline static constexpr unsigned int Class_3_D874BB0E60DFC8F8_TypeDefinitionIndex = 23030;

class Class_3_D874BB0E60DFC8F8 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::RPG::Client::TextID LILJIHBAPII; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D874BB0E60DFC8F8__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_9E3D0C5F7C38F16C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D874BB0E60DFC8F8*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D874BB0E60DFC8F8*&))((::PBYTE)hIl2Cpp + CLASS_3_D874BB0E60DFC8F8_METHOD_3_9E3D0C5F7C38F16C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_469ECD10EF199C13(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D874BB0E60DFC8F8* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D874BB0E60DFC8F8*))((::PBYTE)hIl2Cpp + CLASS_3_D874BB0E60DFC8F8_METHOD_3_469ECD10EF199C13_OFFSET))(a1, a2);
	}
};
