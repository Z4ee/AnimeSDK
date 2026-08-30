#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_941ED7C919523397;
class Class_1_E2FB7E5A9E3705C7_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_35B8E94AA1DBDC5E_METHOD_1_2480771F536FD318_OFFSET UNITYSDK_OFFSET(0x17A36400)
#define CLASS_1_35B8E94AA1DBDC5E_METHOD_1_82645B880F41B7F4_OFFSET UNITYSDK_OFFSET(0x17A36460)
#define CLASS_1_35B8E94AA1DBDC5E_METHOD_1_8A68BCCBF18B0626_1_OFFSET UNITYSDK_OFFSET(0x17A36380)
#define CLASS_1_35B8E94AA1DBDC5E_METHOD_1_8A68BCCBF18B0626_OFFSET UNITYSDK_OFFSET(0x17A36300)
#define CLASS_1_35B8E94AA1DBDC5E__CTOR_OFFSET UNITYSDK_OFFSET(0x17A362F0)

inline static constexpr unsigned int Class_1_35B8E94AA1DBDC5E_TypeDefinitionIndex = 63993;

class Class_1_35B8E94AA1DBDC5E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* DGLCLHLJOOI; // 0x10
	::Class_1_941ED7C919523397* NGILEOCPCDC; // 0x18

	::System::Void _ctor(::Class_1_941ED7C919523397* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_941ED7C919523397*))((::PBYTE)hIl2Cpp + CLASS_1_35B8E94AA1DBDC5E__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_1_8A68BCCBF18B0626(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_35B8E94AA1DBDC5E_METHOD_1_8A68BCCBF18B0626_OFFSET))(this, a1);
	}

	::System::String* Method_1_8A68BCCBF18B0626_1(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_35B8E94AA1DBDC5E_METHOD_1_8A68BCCBF18B0626_1_OFFSET))(this, a1);
	}

	::Class_1_E2FB7E5A9E3705C7_1* Method_1_2480771F536FD318(::System::UInt32 a1)
	{
		return ((::Class_1_E2FB7E5A9E3705C7_1*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_35B8E94AA1DBDC5E_METHOD_1_2480771F536FD318_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_1_82645B880F41B7F4()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35B8E94AA1DBDC5E_METHOD_1_82645B880F41B7F4_OFFSET))(this);
	}
};
