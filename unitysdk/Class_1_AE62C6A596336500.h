#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPGTools::LDWhiteBox { class WhiteBoxConnector; }
namespace RPGTools::LDWhiteBox { class WhiteBoxJunction; }
namespace RPGTools::LDWhiteBox { class WhiteBoxPath; }
namespace RPGTools::LDWhiteBox { class WhiteBoxRegion; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_AE62C6A596336500_METHOD_1_02CA8785220462C6_OFFSET UNITYSDK_OFFSET(0x160FBDE0)
#define CLASS_1_AE62C6A596336500_METHOD_1_199A3770E3204FCD_OFFSET UNITYSDK_OFFSET(0x160FB090)
#define CLASS_1_AE62C6A596336500_METHOD_1_1F5C8CCD36213485_OFFSET UNITYSDK_OFFSET(0x160FB870)
#define CLASS_1_AE62C6A596336500_METHOD_1_391CF272AE8CC98C_OFFSET UNITYSDK_OFFSET(0x160FB1B0)
#define CLASS_1_AE62C6A596336500_METHOD_1_392EFB1C517D0F0C_OFFSET UNITYSDK_OFFSET(0x160FB5F0)
#define CLASS_1_AE62C6A596336500_METHOD_1_48BD86FEB6078B19_OFFSET UNITYSDK_OFFSET(0x160FB970)
#define CLASS_1_AE62C6A596336500_METHOD_1_49B486C68B40417B_OFFSET UNITYSDK_OFFSET(0x160FB150)
#define CLASS_1_AE62C6A596336500_METHOD_1_4B6D73FF09C77254_OFFSET UNITYSDK_OFFSET(0x160FB0F0)
#define CLASS_1_AE62C6A596336500_METHOD_1_507D63F1DAE224C7_OFFSET UNITYSDK_OFFSET(0x160FB2B0)
#define CLASS_1_AE62C6A596336500_METHOD_1_51226D7FFEA44F24_OFFSET UNITYSDK_OFFSET(0x160FB030)
#define CLASS_1_AE62C6A596336500_METHOD_1_5769304A941AAEA8_OFFSET UNITYSDK_OFFSET(0x160FB6B0)
#define CLASS_1_AE62C6A596336500_METHOD_1_9177D4953D7CDFEB_OFFSET UNITYSDK_OFFSET(0x160FB7B0)
#define CLASS_1_AE62C6A596336500_METHOD_1_9FECF4A55EC56CD9_OFFSET UNITYSDK_OFFSET(0x160FB4F0)
#define CLASS_1_AE62C6A596336500_METHOD_1_C4890C3661481A1D_OFFSET UNITYSDK_OFFSET(0x160FBA20)
#define CLASS_1_AE62C6A596336500_METHOD_1_E4865A0578743351_OFFSET UNITYSDK_OFFSET(0x160FB370)
#define CLASS_1_AE62C6A596336500_METHOD_1_E852251294AF8C56_OFFSET UNITYSDK_OFFSET(0x160FBBC0)
#define CLASS_1_AE62C6A596336500__CCTOR_OFFSET UNITYSDK_OFFSET(0x160FBF80)

inline static constexpr unsigned int Class_1_AE62C6A596336500_TypeDefinitionIndex = 49389;

class Class_1_AE62C6A596336500 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxJunction*>** StaticGet_DIONPALJGHO()
	{
		return (::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxJunction*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE62C6A596336500_TypeDefinitionIndex)->GetStaticField(0x33770);
	}
	static ::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxRegion*>** StaticGet_EGGKMANCCCF()
	{
		return (::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxRegion*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE62C6A596336500_TypeDefinitionIndex)->GetStaticField(0x33778);
	}
	static ::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxConnector*>** StaticGet_JCDLPKIGCKN()
	{
		return (::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxConnector*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE62C6A596336500_TypeDefinitionIndex)->GetStaticField(0x33780);
	}
	static ::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxPath*>** StaticGet_HPELNGDMFON()
	{
		return (::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxPath*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE62C6A596336500_TypeDefinitionIndex)->GetStaticField(0x33788);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE62C6A596336500__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::IEnumerable_1<::RPGTools::LDWhiteBox::WhiteBoxRegion*>* Method_1_51226D7FFEA44F24()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPGTools::LDWhiteBox::WhiteBoxRegion*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE62C6A596336500_METHOD_1_51226D7FFEA44F24_OFFSET))();
	}

	static ::System::Collections::Generic::IEnumerable_1<::RPGTools::LDWhiteBox::WhiteBoxConnector*>* Method_1_199A3770E3204FCD()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPGTools::LDWhiteBox::WhiteBoxConnector*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE62C6A596336500_METHOD_1_199A3770E3204FCD_OFFSET))();
	}

	static ::System::Collections::Generic::IEnumerable_1<::RPGTools::LDWhiteBox::WhiteBoxJunction*>* Method_1_4B6D73FF09C77254()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPGTools::LDWhiteBox::WhiteBoxJunction*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE62C6A596336500_METHOD_1_4B6D73FF09C77254_OFFSET))();
	}

	static ::System::Collections::Generic::IEnumerable_1<::RPGTools::LDWhiteBox::WhiteBoxPath*>* Method_1_49B486C68B40417B()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPGTools::LDWhiteBox::WhiteBoxPath*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE62C6A596336500_METHOD_1_49B486C68B40417B_OFFSET))();
	}

	static ::System::Void Method_1_391CF272AE8CC98C(::RPGTools::LDWhiteBox::WhiteBoxRegion* a1)
	{
		return ((::System::Void(*)(::RPGTools::LDWhiteBox::WhiteBoxRegion*))((::PBYTE)hIl2Cpp + CLASS_1_AE62C6A596336500_METHOD_1_391CF272AE8CC98C_OFFSET))(a1);
	}

	static ::System::Void Method_1_507D63F1DAE224C7(::RPGTools::LDWhiteBox::WhiteBoxRegion* a1)
	{
		return ((::System::Void(*)(::RPGTools::LDWhiteBox::WhiteBoxRegion*))((::PBYTE)hIl2Cpp + CLASS_1_AE62C6A596336500_METHOD_1_507D63F1DAE224C7_OFFSET))(a1);
	}

	static ::System::Void Method_1_9FECF4A55EC56CD9(::RPGTools::LDWhiteBox::WhiteBoxConnector* a1)
	{
		return ((::System::Void(*)(::RPGTools::LDWhiteBox::WhiteBoxConnector*))((::PBYTE)hIl2Cpp + CLASS_1_AE62C6A596336500_METHOD_1_9FECF4A55EC56CD9_OFFSET))(a1);
	}

	static ::System::Void Method_1_392EFB1C517D0F0C(::RPGTools::LDWhiteBox::WhiteBoxConnector* a1)
	{
		return ((::System::Void(*)(::RPGTools::LDWhiteBox::WhiteBoxConnector*))((::PBYTE)hIl2Cpp + CLASS_1_AE62C6A596336500_METHOD_1_392EFB1C517D0F0C_OFFSET))(a1);
	}

	static ::System::Void Method_1_5769304A941AAEA8(::RPGTools::LDWhiteBox::WhiteBoxJunction* a1)
	{
		return ((::System::Void(*)(::RPGTools::LDWhiteBox::WhiteBoxJunction*))((::PBYTE)hIl2Cpp + CLASS_1_AE62C6A596336500_METHOD_1_5769304A941AAEA8_OFFSET))(a1);
	}

	static ::System::Void Method_1_9177D4953D7CDFEB(::RPGTools::LDWhiteBox::WhiteBoxJunction* a1)
	{
		return ((::System::Void(*)(::RPGTools::LDWhiteBox::WhiteBoxJunction*))((::PBYTE)hIl2Cpp + CLASS_1_AE62C6A596336500_METHOD_1_9177D4953D7CDFEB_OFFSET))(a1);
	}

	static ::System::Void Method_1_1F5C8CCD36213485(::RPGTools::LDWhiteBox::WhiteBoxPath* a1)
	{
		return ((::System::Void(*)(::RPGTools::LDWhiteBox::WhiteBoxPath*))((::PBYTE)hIl2Cpp + CLASS_1_AE62C6A596336500_METHOD_1_1F5C8CCD36213485_OFFSET))(a1);
	}

	static ::System::Void Method_1_48BD86FEB6078B19(::RPGTools::LDWhiteBox::WhiteBoxPath* a1)
	{
		return ((::System::Void(*)(::RPGTools::LDWhiteBox::WhiteBoxPath*))((::PBYTE)hIl2Cpp + CLASS_1_AE62C6A596336500_METHOD_1_48BD86FEB6078B19_OFFSET))(a1);
	}

	static ::System::Void Method_1_E4865A0578743351()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE62C6A596336500_METHOD_1_E4865A0578743351_OFFSET))();
	}

	static ::RPGTools::LDWhiteBox::WhiteBoxConnector* Method_1_C4890C3661481A1D(::System::String* a1)
	{
		return ((::RPGTools::LDWhiteBox::WhiteBoxConnector*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AE62C6A596336500_METHOD_1_C4890C3661481A1D_OFFSET))(a1);
	}

	static ::RPGTools::LDWhiteBox::WhiteBoxJunction* Method_1_E852251294AF8C56(::System::String* a1)
	{
		return ((::RPGTools::LDWhiteBox::WhiteBoxJunction*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AE62C6A596336500_METHOD_1_E852251294AF8C56_OFFSET))(a1);
	}

	static ::RPGTools::LDWhiteBox::WhiteBoxRegion* Method_1_02CA8785220462C6(::System::String* a1)
	{
		return ((::RPGTools::LDWhiteBox::WhiteBoxRegion*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AE62C6A596336500_METHOD_1_02CA8785220462C6_OFFSET))(a1);
	}
};
