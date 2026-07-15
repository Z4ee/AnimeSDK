#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournBuildRefDataItem; }
namespace System { class Exception; }

#define CLASS_1_2AE9FC3995804AA7_CLEAR_OFFSET UNITYSDK_OFFSET(0x16418E50)
#define CLASS_1_2AE9FC3995804AA7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16418EA0)
#define CLASS_1_2AE9FC3995804AA7_METHOD_1_812C7A20F80A2D14_1_OFFSET UNITYSDK_OFFSET(0x1641AAA0)
#define CLASS_1_2AE9FC3995804AA7_METHOD_1_812C7A20F80A2D14_OFFSET UNITYSDK_OFFSET(0x16418FC0)
#define CLASS_1_2AE9FC3995804AA7_METHOD_1_8E916205602E40BA_OFFSET UNITYSDK_OFFSET(0x16418EF0)
#define CLASS_1_2AE9FC3995804AA7_METHOD_1_E4EAF91E9D508FBA_OFFSET UNITYSDK_OFFSET(0x16418E00)
#define CLASS_1_2AE9FC3995804AA7__CTOR_OFFSET UNITYSDK_OFFSET(0x1641B620)

inline static constexpr unsigned int Class_1_2AE9FC3995804AA7_TypeDefinitionIndex = 64549;

class Class_1_2AE9FC3995804AA7 : public ::System::Object
{
public:
	::RPG::GameCore::RogueTournMode Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AE9FC3995804AA7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E4EAF91E9D508FBA(::RPG::GameCore::RogueTournMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + CLASS_1_2AE9FC3995804AA7_METHOD_1_E4EAF91E9D508FBA_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AE9FC3995804AA7_CLEAR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AE9FC3995804AA7_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_8E916205602E40BA(::RPG::Client::IRogueTournBuildRefDataItem* a1, ::System::Exception*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Exception*&))((::PBYTE)hIl2Cpp + CLASS_1_2AE9FC3995804AA7_METHOD_1_8E916205602E40BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_812C7A20F80A2D14(::RPG::Client::IRogueTournBuildRefDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + CLASS_1_2AE9FC3995804AA7_METHOD_1_812C7A20F80A2D14_OFFSET))(this, a1);
	}

	::System::Void Method_1_812C7A20F80A2D14_1(::RPG::Client::IRogueTournBuildRefDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + CLASS_1_2AE9FC3995804AA7_METHOD_1_812C7A20F80A2D14_1_OFFSET))(this, a1);
	}
};
