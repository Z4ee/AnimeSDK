#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatActionPlayNode; }
namespace MoleMole::GalGame { class MainCityChatNPCEnterAction; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityMultiChatNPCEnterAction; }

#define CLASS_2_CEF4B00FF1A92454_METHOD_2_2B5F6CF81A41B998_OFFSET UNITYSDK_OFFSET(0x13C16400)
#define CLASS_2_CEF4B00FF1A92454_METHOD_2_60D66D1EE0DABC91_OFFSET UNITYSDK_OFFSET(0x13C16790)
#define CLASS_2_CEF4B00FF1A92454_METHOD_2_A7B14CC10CF207F4_OFFSET UNITYSDK_OFFSET(0x13C166A0)
#define CLASS_2_CEF4B00FF1A92454_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x13C16800)
#define CLASS_2_CEF4B00FF1A92454__CTOR_OFFSET UNITYSDK_OFFSET(0x13C16380)

inline static constexpr unsigned int Class_2_CEF4B00FF1A92454_TypeDefinitionIndex = 74857;

class Class_2_CEF4B00FF1A92454 : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatActionPlayNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_CEF4B00FF1A92454__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B5F6CF81A41B998(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_CEF4B00FF1A92454_METHOD_2_2B5F6CF81A41B998_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_CEF4B00FF1A92454_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_A7B14CC10CF207F4(::MoleMole::GalGame::MainCityChatNPCEnterAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatNPCEnterAction*))((::PBYTE)hIl2Cpp + CLASS_2_CEF4B00FF1A92454_METHOD_2_A7B14CC10CF207F4_OFFSET))(this, a1);
	}

	::System::Void Method_2_60D66D1EE0DABC91(::MoleMole::GalGame::MainCityMultiChatNPCEnterAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityMultiChatNPCEnterAction*))((::PBYTE)hIl2Cpp + CLASS_2_CEF4B00FF1A92454_METHOD_2_60D66D1EE0DABC91_OFFSET))(this, a1);
	}
};
