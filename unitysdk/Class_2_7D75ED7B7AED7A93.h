#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2D5DADE6FF36AA79.h"
#include "unitysdk/Enum_3_104C7FF74440A413.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class LookIKCfg; }
namespace MoleMole::GalGame { class MainCityChatLookIKNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_7D75ED7B7AED7A93_METHOD_2_2F0A76EA9B92FDB0_OFFSET UNITYSDK_OFFSET(0x15CB9D70)
#define CLASS_2_7D75ED7B7AED7A93_METHOD_2_6AF2890A11F94F72_OFFSET UNITYSDK_OFFSET(0x15CB9D80)
#define CLASS_2_7D75ED7B7AED7A93_METHOD_2_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x15CB9900)
#define CLASS_2_7D75ED7B7AED7A93_METHOD_2_86A3C2FCE5CF1EC5_OFFSET UNITYSDK_OFFSET(0x15CB99D0)
#define CLASS_2_7D75ED7B7AED7A93_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x15CBA0A0)
#define CLASS_2_7D75ED7B7AED7A93__CTOR_OFFSET UNITYSDK_OFFSET(0x15CB9880)

inline static constexpr unsigned int Class_2_7D75ED7B7AED7A93_TypeDefinitionIndex = 59826;

class Class_2_7D75ED7B7AED7A93 : public ::Class_1_2D5DADE6FF36AA79
{
public:
	::MoleMole::GalGame::MainCityChatLookIKNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_7D75ED7B7AED7A93__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_70437D85C11C5222(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_7D75ED7B7AED7A93_METHOD_2_70437D85C11C5222_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_86A3C2FCE5CF1EC5(::MoleMole::GalGame::LookIKCfg* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::MoleMole::GalGame::LookIKCfg*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D75ED7B7AED7A93_METHOD_2_86A3C2FCE5CF1EC5_OFFSET))(a1, a2);
	}

	::MoleMole::GalGame::MainCityChatLookIKNode* Method_2_2F0A76EA9B92FDB0()
	{
		return ((::MoleMole::GalGame::MainCityChatLookIKNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D75ED7B7AED7A93_METHOD_2_2F0A76EA9B92FDB0_OFFSET))(this);
	}

	static ::System::Boolean Method_2_6AF2890A11F94F72(::System::Int32 a1, ::Enum_3_104C7FF74440A413 a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::System::Int32, ::Enum_3_104C7FF74440A413, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D75ED7B7AED7A93_METHOD_2_6AF2890A11F94F72_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_7D75ED7B7AED7A93_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};
