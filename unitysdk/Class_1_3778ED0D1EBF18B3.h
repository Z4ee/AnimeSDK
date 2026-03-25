#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightOrbConfigRow; }
namespace RPG::GameCore { class GridFightOrbTypeRow; }
namespace System { class String; }

#define CLASS_1_3778ED0D1EBF18B3_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x8C30040)
#define CLASS_1_3778ED0D1EBF18B3_METHOD_1_895AD7471A10C84D_OFFSET UNITYSDK_OFFSET(0x8C30020)
#define CLASS_1_3778ED0D1EBF18B3_METHOD_1_A917AC671DF6CB2D_OFFSET UNITYSDK_OFFSET(0x8C2FE80)
#define CLASS_1_3778ED0D1EBF18B3_METHOD_1_B814A8203B9C8D9F_OFFSET UNITYSDK_OFFSET(0x8C2FFD0)
#define CLASS_1_3778ED0D1EBF18B3_METHOD_1_D978819B0A4871A0_1_OFFSET UNITYSDK_OFFSET(0x8C30000)
#define CLASS_1_3778ED0D1EBF18B3_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x8C2FFB0)
#define CLASS_1_3778ED0D1EBF18B3__CTOR_OFFSET UNITYSDK_OFFSET(0x8C2FF60)

inline static constexpr unsigned int Class_1_3778ED0D1EBF18B3_TypeDefinitionIndex = 52336;

class Class_1_3778ED0D1EBF18B3 : public ::System::Object
{
public:
	::RPG::GameCore::GridFightOrbTypeRow* Field_1_0; // 0x10
	::RPG::GameCore::GridFightOrbConfigRow* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::GridFightOrbConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightOrbConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_3778ED0D1EBF18B3__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_3778ED0D1EBF18B3* Method_1_A917AC671DF6CB2D(::System::UInt32 a1)
	{
		return ((::Class_1_3778ED0D1EBF18B3*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3778ED0D1EBF18B3_METHOD_1_A917AC671DF6CB2D_OFFSET))(a1);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3778ED0D1EBF18B3_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::RPG::Client::TextID Method_1_B814A8203B9C8D9F()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3778ED0D1EBF18B3_METHOD_1_B814A8203B9C8D9F_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3778ED0D1EBF18B3_METHOD_1_D978819B0A4871A0_1_OFFSET))(this);
	}

	::RPG::GameCore::GridFightOrbType Method_1_895AD7471A10C84D()
	{
		return ((::RPG::GameCore::GridFightOrbType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3778ED0D1EBF18B3_METHOD_1_895AD7471A10C84D_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3778ED0D1EBF18B3_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
