#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8903D5CF5E1CFFB8_Struct_2_D523DB68339472DE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8903D5CF5E1CFFB8_Class_1_381FCBF1910E5961;
namespace RPGTools::LDWhiteBox { class WhiteBoxPath; }
namespace RPGTools::LDWhiteBox { class WhiteBoxRegion; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8903D5CF5E1CFFB8_CLASS_1_706EC61B395A9D16_METHOD_1_58A8AABE5F4A6065_OFFSET UNITYSDK_OFFSET(0x16600420)
#define CLASS_1_8903D5CF5E1CFFB8_CLASS_1_706EC61B395A9D16_METHOD_1_CEFFBB1F3DAA07EE_OFFSET UNITYSDK_OFFSET(0x16600700)
#define CLASS_1_8903D5CF5E1CFFB8_CLASS_1_706EC61B395A9D16__CTOR_OFFSET UNITYSDK_OFFSET(0x165F3FE0)

inline static constexpr unsigned int Class_1_8903D5CF5E1CFFB8_Class_1_706EC61B395A9D16_TypeDefinitionIndex = 48942;

class Class_1_8903D5CF5E1CFFB8_Class_1_706EC61B395A9D16 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPGTools::LDWhiteBox::WhiteBoxRegion*, ::System::Collections::Generic::List_1<::RPGTools::LDWhiteBox::WhiteBoxRegion*>*>* EGGCADJJJOD; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPGTools::LDWhiteBox::WhiteBoxPath*, ::Class_1_8903D5CF5E1CFFB8_Class_1_381FCBF1910E5961*>* PKIJJKHMPDO; // 0x18
	::Class_1_8903D5CF5E1CFFB8_Struct_2_D523DB68339472DE CKNAFGPJGDP; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPGTools::LDWhiteBox::WhiteBoxRegion*, ::Class_1_8903D5CF5E1CFFB8_Struct_2_D523DB68339472DE>* NEIMCKIEJPE; // 0x40
	::RPGTools::LDWhiteBox::WhiteBoxRegion* KEBAPKDMJBO; // 0x48
	::UnityEngine::Vector3 CGPOODEDNGK; // 0x50
	::UnityEngine::Vector3 BCLKMAGAIII; // 0x5C
	::System::Boolean MKEHHAKDBHG; // 0x68

	::System::Void _ctor(::RPGTools::LDWhiteBox::WhiteBoxRegion* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::WhiteBoxRegion*))((::PBYTE)hIl2Cpp + CLASS_1_8903D5CF5E1CFFB8_CLASS_1_706EC61B395A9D16__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_58A8AABE5F4A6065(::RPGTools::LDWhiteBox::WhiteBoxRegion* a1, ::Class_1_8903D5CF5E1CFFB8_Struct_2_D523DB68339472DE& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPGTools::LDWhiteBox::WhiteBoxRegion*, ::Class_1_8903D5CF5E1CFFB8_Struct_2_D523DB68339472DE&))((::PBYTE)hIl2Cpp + CLASS_1_8903D5CF5E1CFFB8_CLASS_1_706EC61B395A9D16_METHOD_1_58A8AABE5F4A6065_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CEFFBB1F3DAA07EE(::RPGTools::LDWhiteBox::WhiteBoxRegion* a1, ::Class_1_8903D5CF5E1CFFB8_Struct_2_D523DB68339472DE a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::WhiteBoxRegion*, ::Class_1_8903D5CF5E1CFFB8_Struct_2_D523DB68339472DE))((::PBYTE)hIl2Cpp + CLASS_1_8903D5CF5E1CFFB8_CLASS_1_706EC61B395A9D16_METHOD_1_CEFFBB1F3DAA07EE_OFFSET))(this, a1, a2);
	}
};
