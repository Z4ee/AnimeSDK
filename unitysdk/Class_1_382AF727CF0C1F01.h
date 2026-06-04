#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_29;
class Class_1_BD52D1CC7132DA5B;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::IO { class BinaryWriter; }

#define CLASS_1_382AF727CF0C1F01_CLEAR_OFFSET UNITYSDK_OFFSET(0x138B2970)
#define CLASS_1_382AF727CF0C1F01_DISPOSE_OFFSET UNITYSDK_OFFSET(0x138B29B0)
#define CLASS_1_382AF727CF0C1F01_METHOD_1_4446CE9032C1E992_OFFSET UNITYSDK_OFFSET(0x138B2A20)
#define CLASS_1_382AF727CF0C1F01_METHOD_1_C727C35DBB01E252_OFFSET UNITYSDK_OFFSET(0x138B58F0)
#define CLASS_1_382AF727CF0C1F01_METHOD_1_E657972EE1EE9833_OFFSET UNITYSDK_OFFSET(0x138B3E10)
#define CLASS_1_382AF727CF0C1F01_METHOD_1_F6FC12846B0A0940_1_OFFSET UNITYSDK_OFFSET(0x138B38F0)
#define CLASS_1_382AF727CF0C1F01_METHOD_1_F6FC12846B0A0940_OFFSET UNITYSDK_OFFSET(0x138B33D0)
#define CLASS_1_382AF727CF0C1F01__CTOR_OFFSET UNITYSDK_OFFSET(0x138B5BF0)

inline static constexpr unsigned int Class_1_382AF727CF0C1F01_TypeDefinitionIndex = 63199;

class Class_1_382AF727CF0C1F01 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_382AF727CF0C1F01__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_382AF727CF0C1F01_CLEAR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_382AF727CF0C1F01_DISPOSE_OFFSET))(this);
	}

	::System::String* Method_1_4446CE9032C1E992(::Class_1_BD52D1CC7132DA5B* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_BD52D1CC7132DA5B*))((::PBYTE)hIl2Cpp + CLASS_1_382AF727CF0C1F01_METHOD_1_4446CE9032C1E992_OFFSET))(this, a1);
	}

	::System::Void Method_1_F6FC12846B0A0940(::System::IO::BinaryWriter* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_382AF727CF0C1F01_METHOD_1_F6FC12846B0A0940_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F6FC12846B0A0940_1(::System::IO::BinaryWriter* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_382AF727CF0C1F01_METHOD_1_F6FC12846B0A0940_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E657972EE1EE9833(::System::IO::BinaryWriter* a1, ::System::Collections::Generic::IList_1<::Class_1_7807B2B04302CD7B_29*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::System::Collections::Generic::IList_1<::Class_1_7807B2B04302CD7B_29*>*))((::PBYTE)hIl2Cpp + CLASS_1_382AF727CF0C1F01_METHOD_1_E657972EE1EE9833_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C727C35DBB01E252(::System::IO::BinaryWriter* a1, ::Class_1_7807B2B04302CD7B_29* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::Class_1_7807B2B04302CD7B_29*))((::PBYTE)hIl2Cpp + CLASS_1_382AF727CF0C1F01_METHOD_1_C727C35DBB01E252_OFFSET))(this, a1, a2);
	}
};
