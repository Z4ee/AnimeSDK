#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FuncUnlockData; }
namespace RPG::GameCore { class FunctionConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_524E625AF890459D_METHOD_1_489E47E4E7C1C117_OFFSET UNITYSDK_OFFSET(0x12936DE0)
#define CLASS_1_524E625AF890459D_METHOD_1_A76A07E68FFF9CDC_1_OFFSET UNITYSDK_OFFSET(0x12936D20)
#define CLASS_1_524E625AF890459D_METHOD_1_A76A07E68FFF9CDC_OFFSET UNITYSDK_OFFSET(0x12936C60)
#define CLASS_1_524E625AF890459D_METHOD_1_BF5C59025A13AA03_OFFSET UNITYSDK_OFFSET(0x12936E90)
#define CLASS_1_524E625AF890459D_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x12936C40)
#define CLASS_1_524E625AF890459D__CTOR_OFFSET UNITYSDK_OFFSET(0x12936F00)

inline static constexpr unsigned int Class_1_524E625AF890459D_TypeDefinitionIndex = 62707;

class Class_1_524E625AF890459D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_2; // 0x18
	::RPG::GameCore::FunctionConfigRow* Field_1_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::FunctionConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FunctionConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_524E625AF890459D__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_524E625AF890459D_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::UInt32 Method_1_A76A07E68FFF9CDC()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_524E625AF890459D_METHOD_1_A76A07E68FFF9CDC_OFFSET))(this);
	}

	::System::UInt32 Method_1_A76A07E68FFF9CDC_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_524E625AF890459D_METHOD_1_A76A07E68FFF9CDC_1_OFFSET))(this);
	}

	::RPG::Client::FuncUnlockData* Method_1_489E47E4E7C1C117()
	{
		return ((::RPG::Client::FuncUnlockData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_524E625AF890459D_METHOD_1_489E47E4E7C1C117_OFFSET))(this);
	}

	static ::Class_1_524E625AF890459D* Method_1_BF5C59025A13AA03(::RPG::GameCore::FunctionConfigRow* a1)
	{
		return ((::Class_1_524E625AF890459D*(*)(::RPG::GameCore::FunctionConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_524E625AF890459D_METHOD_1_BF5C59025A13AA03_OFFSET))(a1);
	}
};
