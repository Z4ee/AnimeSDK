#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/Struct_2_7C99830C88C15F6F.h"
#include "unitysdk/Struct_2_8753CC6334E73CD4.h"
#include "unitysdk/Struct_2_DF90B2BD73749811.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_2CAAA2FDF9170110_Class_0_16E7307DCC43CB2C_1;
class Class_1_945ACFB1FEBC7A2C_4;
namespace SimpleJSON { class JSONNode; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2CAAA2FDF9170110_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16E775D0)
#define CLASS_1_2CAAA2FDF9170110_METHOD_1_1A3F4989537C9EBA_OFFSET UNITYSDK_OFFSET(0x16E76F70)
#define CLASS_1_2CAAA2FDF9170110_METHOD_1_450D282682A57603_OFFSET UNITYSDK_OFFSET(0x16E76F20)
#define CLASS_1_2CAAA2FDF9170110_METHOD_1_53C29C1FB77B9810_OFFSET UNITYSDK_OFFSET(0x16E766F0)
#define CLASS_1_2CAAA2FDF9170110_METHOD_1_65CF685B19AB5EC4_OFFSET UNITYSDK_OFFSET(0x16E76E10)
#define CLASS_1_2CAAA2FDF9170110_METHOD_1_6ADCC0A37EBC3AAB_OFFSET UNITYSDK_OFFSET(0x16E77640)
#define CLASS_1_2CAAA2FDF9170110_METHOD_1_7D38146965857770_OFFSET UNITYSDK_OFFSET(0x16E76A10)
#define CLASS_1_2CAAA2FDF9170110_METHOD_1_8C86D84D981C8F66_OFFSET UNITYSDK_OFFSET(0x16E77330)
#define CLASS_1_2CAAA2FDF9170110_METHOD_1_8D4BF1489885D657_OFFSET UNITYSDK_OFFSET(0x16E76870)
#define CLASS_1_2CAAA2FDF9170110_METHOD_1_AAE9DCD91A524D5D_OFFSET UNITYSDK_OFFSET(0x16E76F00)
#define CLASS_1_2CAAA2FDF9170110_METHOD_1_B09473BCCD510D84_OFFSET UNITYSDK_OFFSET(0x16E76840)
#define CLASS_1_2CAAA2FDF9170110_METHOD_1_DF57634857B4E472_OFFSET UNITYSDK_OFFSET(0x16E765C0)
#define CLASS_1_2CAAA2FDF9170110_METHOD_1_EE4C5F6B5F6CB7AD_OFFSET UNITYSDK_OFFSET(0x16E769C0)
#define CLASS_1_2CAAA2FDF9170110__CTOR_OFFSET UNITYSDK_OFFSET(0x16E784B0)

inline static constexpr unsigned int Class_1_2CAAA2FDF9170110_TypeDefinitionIndex = 22593;

class Class_1_2CAAA2FDF9170110 : public ::System::Object
{
public:
	::System::Action_3<::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::Class_1_2CAAA2FDF9170110_Class_0_16E7307DCC43CB2C_1*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CAAA2FDF9170110__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_DF57634857B4E472(::RPG::GameCore::StringHash a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_2CAAA2FDF9170110_METHOD_1_DF57634857B4E472_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_53C29C1FB77B9810(::RPG::GameCore::StringHash a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_2CAAA2FDF9170110_METHOD_1_53C29C1FB77B9810_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_B09473BCCD510D84(::RPG::GameCore::StringHash a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_2CAAA2FDF9170110_METHOD_1_B09473BCCD510D84_OFFSET))(this, a1);
	}

	::Struct_2_7C99830C88C15F6F Method_1_8D4BF1489885D657(::RPG::GameCore::StringHash a1)
	{
		return ((::Struct_2_7C99830C88C15F6F(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_2CAAA2FDF9170110_METHOD_1_8D4BF1489885D657_OFFSET))(this, a1);
	}

	::System::Void Method_1_EE4C5F6B5F6CB7AD(::RPG::GameCore::StringHash a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_2CAAA2FDF9170110_METHOD_1_EE4C5F6B5F6CB7AD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7D38146965857770(::Struct_2_DF90B2BD73749811 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_DF90B2BD73749811))((::PBYTE)hIl2Cpp + CLASS_1_2CAAA2FDF9170110_METHOD_1_7D38146965857770_OFFSET))(this, a1);
	}

	::System::Void Method_1_65CF685B19AB5EC4(::Struct_2_8753CC6334E73CD4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_8753CC6334E73CD4))((::PBYTE)hIl2Cpp + CLASS_1_2CAAA2FDF9170110_METHOD_1_65CF685B19AB5EC4_OFFSET))(this, a1);
	}

	::System::Void Method_1_AAE9DCD91A524D5D(::RPG::GameCore::StringHash a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_2CAAA2FDF9170110_METHOD_1_AAE9DCD91A524D5D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_450D282682A57603(::RPG::GameCore::StringHash a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_2CAAA2FDF9170110_METHOD_1_450D282682A57603_OFFSET))(this, a1);
	}

	::System::Void Method_1_1A3F4989537C9EBA(::RPG::GameCore::StringHash a1, ::RPG::GameCore::FixPoint a2, ::Class_1_945ACFB1FEBC7A2C_4* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint, ::Class_1_945ACFB1FEBC7A2C_4*))((::PBYTE)hIl2Cpp + CLASS_1_2CAAA2FDF9170110_METHOD_1_1A3F4989537C9EBA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8C86D84D981C8F66(::Class_1_2CAAA2FDF9170110* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CAAA2FDF9170110*))((::PBYTE)hIl2Cpp + CLASS_1_2CAAA2FDF9170110_METHOD_1_8C86D84D981C8F66_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CAAA2FDF9170110_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_6ADCC0A37EBC3AAB(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_2CAAA2FDF9170110_METHOD_1_6ADCC0A37EBC3AAB_OFFSET))(this, a1);
	}
};
