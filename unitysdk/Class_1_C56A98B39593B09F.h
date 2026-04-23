#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleHintToastStyle.h"
#include "unitysdk/System/Object.h"

class Class_1_C56A98B39593B09F_Class_0_16E7307DCC43CB2C_20;
class Class_1_C56A98B39593B09F_Class_1_1AD5F38DB649B0A5;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C56A98B39593B09F_METHOD_1_640FDC476ADF09F3_OFFSET UNITYSDK_OFFSET(0x12379C60)
#define CLASS_1_C56A98B39593B09F_METHOD_1_CF780FC3D0CB1833_OFFSET UNITYSDK_OFFSET(0x12379EC0)
#define CLASS_1_C56A98B39593B09F_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x12379D50)
#define CLASS_1_C56A98B39593B09F__CTOR_OFFSET UNITYSDK_OFFSET(0x1237A010)

inline static constexpr unsigned int Class_1_C56A98B39593B09F_TypeDefinitionIndex = 66064;

class Class_1_C56A98B39593B09F : public ::System::Object
{
public:
	static ::Class_1_C56A98B39593B09F** StaticGet_Field_1_0()
	{
		return (::Class_1_C56A98B39593B09F**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C56A98B39593B09F_TypeDefinitionIndex)->GetStaticField(0x6AE80);
	}
	::Class_1_C56A98B39593B09F_Class_1_1AD5F38DB649B0A5* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleHintToastStyle, ::Class_1_C56A98B39593B09F_Class_0_16E7307DCC43CB2C_20*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C56A98B39593B09F__CTOR_OFFSET))(this);
	}

	::Class_1_C56A98B39593B09F_Class_0_16E7307DCC43CB2C_20* Method_1_640FDC476ADF09F3(::RPG::GameCore::BattleHintToastStyle a1)
	{
		return ((::Class_1_C56A98B39593B09F_Class_0_16E7307DCC43CB2C_20*(*)(::PVOID, ::RPG::GameCore::BattleHintToastStyle))((::PBYTE)hIl2Cpp + CLASS_1_C56A98B39593B09F_METHOD_1_640FDC476ADF09F3_OFFSET))(this, a1);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C56A98B39593B09F_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	static ::Class_1_C56A98B39593B09F* Method_1_CF780FC3D0CB1833()
	{
		return ((::Class_1_C56A98B39593B09F*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C56A98B39593B09F_METHOD_1_CF780FC3D0CB1833_OFFSET))();
	}
};
