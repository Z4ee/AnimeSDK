#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_980BB27C20DEC196.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_342C8260013D3499;
namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_9D50CD865666B27C_METHOD_3_D0B0E8495E8A13B8_OFFSET UNITYSDK_OFFSET(0x15723AF0)
#define CLASS_3_9D50CD865666B27C_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0x15724090)
#define CLASS_3_9D50CD865666B27C_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x15723B80)
#define CLASS_3_9D50CD865666B27C_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x15723C10)
#define CLASS_3_9D50CD865666B27C__CTOR_OFFSET UNITYSDK_OFFSET(0x157240E0)

inline static constexpr unsigned int Class_3_9D50CD865666B27C_TypeDefinitionIndex = 65909;

class Class_3_9D50CD865666B27C : public ::Class_2_980BB27C20DEC196
{
public:
	// static const ::System::Single JCENJMALKBB; // 0x0
	// static const ::System::Single KMINGMBCIBI; // 0x0
	::Class_1_342C8260013D3499* MJKBBDNJFDN; // 0x28
	::System::UInt32 IGDOFKLAILH; // 0x30
	::System::Boolean LLMLOGNFFCD; // 0x34
	::System::Boolean AELFMDGFAIK; // 0x35
	::UnityEngine::Vector2 ICGKFDEILKA; // 0x38
	::RPG::Client::LittleGame::Match3::OpponentRole BDPIMPJOJBK; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D50CD865666B27C__CTOR_OFFSET))(this);
	}

	static ::Class_3_9D50CD865666B27C* Method_3_D0B0E8495E8A13B8(::RPG::Client::MatchThreeBoard* a1, ::Class_1_342C8260013D3499* a2)
	{
		return ((::Class_3_9D50CD865666B27C*(*)(::RPG::Client::MatchThreeBoard*, ::Class_1_342C8260013D3499*))((::PBYTE)hIl2Cpp + CLASS_3_9D50CD865666B27C_METHOD_3_D0B0E8495E8A13B8_OFFSET))(a1, a2);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D50CD865666B27C_ONCLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D50CD865666B27C_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_E61C16044B7481FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D50CD865666B27C_METHOD_3_E61C16044B7481FF_OFFSET))(this);
	}
};
