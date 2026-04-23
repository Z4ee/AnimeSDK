#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_28;
class Class_1_7D8428CCA14A6C35;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::IO { class BinaryWriter; }

#define CLASS_1_3B873EF25B8C35AA_CLEAR_OFFSET UNITYSDK_OFFSET(0x12998870)
#define CLASS_1_3B873EF25B8C35AA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x129988B0)
#define CLASS_1_3B873EF25B8C35AA_METHOD_1_37D891431DD73B35_OFFSET UNITYSDK_OFFSET(0x12998920)
#define CLASS_1_3B873EF25B8C35AA_METHOD_1_8F1D931D5E7AC4C0_OFFSET UNITYSDK_OFFSET(0x12999C30)
#define CLASS_1_3B873EF25B8C35AA_METHOD_1_C727C35DBB01E252_OFFSET UNITYSDK_OFFSET(0x1299B5B0)
#define CLASS_1_3B873EF25B8C35AA_METHOD_1_F6FC12846B0A0940_1_OFFSET UNITYSDK_OFFSET(0x12999700)
#define CLASS_1_3B873EF25B8C35AA_METHOD_1_F6FC12846B0A0940_OFFSET UNITYSDK_OFFSET(0x129991D0)
#define CLASS_1_3B873EF25B8C35AA__CTOR_OFFSET UNITYSDK_OFFSET(0x1299B8D0)

inline static constexpr unsigned int Class_1_3B873EF25B8C35AA_TypeDefinitionIndex = 62266;

class Class_1_3B873EF25B8C35AA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B873EF25B8C35AA__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B873EF25B8C35AA_CLEAR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B873EF25B8C35AA_DISPOSE_OFFSET))(this);
	}

	::System::String* Method_1_37D891431DD73B35(::Class_1_7D8428CCA14A6C35* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_7D8428CCA14A6C35*))((::PBYTE)hIl2Cpp + CLASS_1_3B873EF25B8C35AA_METHOD_1_37D891431DD73B35_OFFSET))(this, a1);
	}

	::System::Void Method_1_F6FC12846B0A0940(::System::IO::BinaryWriter* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_3B873EF25B8C35AA_METHOD_1_F6FC12846B0A0940_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F6FC12846B0A0940_1(::System::IO::BinaryWriter* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_3B873EF25B8C35AA_METHOD_1_F6FC12846B0A0940_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8F1D931D5E7AC4C0(::System::IO::BinaryWriter* a1, ::System::Collections::Generic::IList_1<::Class_1_7807B2B04302CD7B_28*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::System::Collections::Generic::IList_1<::Class_1_7807B2B04302CD7B_28*>*))((::PBYTE)hIl2Cpp + CLASS_1_3B873EF25B8C35AA_METHOD_1_8F1D931D5E7AC4C0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C727C35DBB01E252(::System::IO::BinaryWriter* a1, ::Class_1_7807B2B04302CD7B_28* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::Class_1_7807B2B04302CD7B_28*))((::PBYTE)hIl2Cpp + CLASS_1_3B873EF25B8C35AA_METHOD_1_C727C35DBB01E252_OFFSET))(this, a1, a2);
	}
};
