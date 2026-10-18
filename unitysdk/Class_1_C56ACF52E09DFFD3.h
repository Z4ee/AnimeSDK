#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LimaoNewsCityType.h"
#include "unitysdk/System/Object.h"

class Class_1_0BE9E9C1D5A3C687;
class Class_1_B21ECC863F2048A5;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C56ACF52E09DFFD3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A94240)
#define CLASS_1_C56ACF52E09DFFD3_GET_CURRENTCITYTYPE_OFFSET UNITYSDK_OFFSET(0x15A94ED0)
#define CLASS_1_C56ACF52E09DFFD3_METHOD_1_25733A6A650AA7B9_OFFSET UNITYSDK_OFFSET(0x15A947A0)
#define CLASS_1_C56ACF52E09DFFD3_METHOD_1_395FFD6621D8EECE_OFFSET UNITYSDK_OFFSET(0x15A94EF0)
#define CLASS_1_C56ACF52E09DFFD3_METHOD_1_4402BBF8D73A777C_OFFSET UNITYSDK_OFFSET(0x15A949D0)
#define CLASS_1_C56ACF52E09DFFD3_METHOD_1_4D24AF6D3F0D4655_1_OFFSET UNITYSDK_OFFSET(0x15A951A0)
#define CLASS_1_C56ACF52E09DFFD3_METHOD_1_4D24AF6D3F0D4655_OFFSET UNITYSDK_OFFSET(0x15A94F40)
#define CLASS_1_C56ACF52E09DFFD3_METHOD_1_5E67CD9643FF4192_OFFSET UNITYSDK_OFFSET(0x15A942F0)
#define CLASS_1_C56ACF52E09DFFD3_METHOD_1_61DDB8B626D4C8FE_OFFSET UNITYSDK_OFFSET(0x15A94910)
#define CLASS_1_C56ACF52E09DFFD3_METHOD_1_A02C76FFB23049FF_OFFSET UNITYSDK_OFFSET(0x15A95220)
#define CLASS_1_C56ACF52E09DFFD3_METHOD_1_B22A9F91FA266656_OFFSET UNITYSDK_OFFSET(0x15A94FC0)
#define CLASS_1_C56ACF52E09DFFD3_METHOD_1_F40569D1387E6CA9_OFFSET UNITYSDK_OFFSET(0x15A95350)
#define CLASS_1_C56ACF52E09DFFD3_SET_CURRENTCITYTYPE_OFFSET UNITYSDK_OFFSET(0x15A94EE0)
#define CLASS_1_C56ACF52E09DFFD3__CTOR_OFFSET UNITYSDK_OFFSET(0x15A941E0)

inline static constexpr unsigned int Class_1_C56ACF52E09DFFD3_TypeDefinitionIndex = 80323;

class Class_1_C56ACF52E09DFFD3 : public ::System::Object
{
public:
	// static const ::System::String* JMLBPBLEHAE; // 0x0
	::Class_1_0BE9E9C1D5A3C687* EBNHHEODPHP; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* MMOOGOKHNNO; // 0x18
	::RPG::GameCore::LimaoNewsCityType _CurrentCityType_k__BackingField; // 0x20

	::System::Void _ctor(::Class_1_0BE9E9C1D5A3C687* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0BE9E9C1D5A3C687*))((::PBYTE)hIl2Cpp + CLASS_1_C56ACF52E09DFFD3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C56ACF52E09DFFD3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_5E67CD9643FF4192(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_C56ACF52E09DFFD3_METHOD_1_5E67CD9643FF4192_OFFSET))(this, a1);
	}

	::System::Void Method_1_25733A6A650AA7B9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C56ACF52E09DFFD3_METHOD_1_25733A6A650AA7B9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_61DDB8B626D4C8FE(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C56ACF52E09DFFD3_METHOD_1_61DDB8B626D4C8FE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_4402BBF8D73A777C(::System::Int32 a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_C56ACF52E09DFFD3_METHOD_1_4402BBF8D73A777C_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::LimaoNewsCityType get_CurrentCityType()
	{
		return ((::RPG::GameCore::LimaoNewsCityType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C56ACF52E09DFFD3_GET_CURRENTCITYTYPE_OFFSET))(this);
	}

	::System::Void set_CurrentCityType(::RPG::GameCore::LimaoNewsCityType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LimaoNewsCityType))((::PBYTE)hIl2Cpp + CLASS_1_C56ACF52E09DFFD3_SET_CURRENTCITYTYPE_OFFSET))(this, a1);
	}

	::System::Void Method_1_395FFD6621D8EECE(::RPG::GameCore::LimaoNewsCityType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LimaoNewsCityType))((::PBYTE)hIl2Cpp + CLASS_1_C56ACF52E09DFFD3_METHOD_1_395FFD6621D8EECE_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* Method_1_4D24AF6D3F0D4655()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C56ACF52E09DFFD3_METHOD_1_4D24AF6D3F0D4655_OFFSET))(this);
	}

	::Il2CppArray<::System::UInt32>* Method_1_4D24AF6D3F0D4655_1()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C56ACF52E09DFFD3_METHOD_1_4D24AF6D3F0D4655_1_OFFSET))(this);
	}

	::Class_1_B21ECC863F2048A5* Method_1_B22A9F91FA266656()
	{
		return ((::Class_1_B21ECC863F2048A5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C56ACF52E09DFFD3_METHOD_1_B22A9F91FA266656_OFFSET))(this);
	}

	::System::Boolean Method_1_A02C76FFB23049FF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C56ACF52E09DFFD3_METHOD_1_A02C76FFB23049FF_OFFSET))(this);
	}

	::System::Void Method_1_F40569D1387E6CA9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C56ACF52E09DFFD3_METHOD_1_F40569D1387E6CA9_OFFSET))(this, a1);
	}
};
