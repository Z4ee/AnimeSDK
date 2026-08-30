#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedFile; }

#define CLASS_1_E0DE9F490DD70B89_METHOD_1_281A2023DEE5E80E_OFFSET UNITYSDK_OFFSET(0x1E589360)
#define CLASS_1_E0DE9F490DD70B89_METHOD_1_4B5B0B4E28D31F7A_OFFSET UNITYSDK_OFFSET(0x1E5605B0)
#define CLASS_1_E0DE9F490DD70B89_METHOD_1_51DEC44B986280C0_OFFSET UNITYSDK_OFFSET(0x1E588E00)
#define CLASS_1_E0DE9F490DD70B89_METHOD_1_7740397CF427AAE7_OFFSET UNITYSDK_OFFSET(0x1E560620)
#define CLASS_1_E0DE9F490DD70B89_METHOD_1_87C7D8EC0E626C86_OFFSET UNITYSDK_OFFSET(0x1E560DC0)
#define CLASS_1_E0DE9F490DD70B89_METHOD_1_99250689080BB82A_OFFSET UNITYSDK_OFFSET(0x1E5893C0)
#define CLASS_1_E0DE9F490DD70B89__CTOR_OFFSET UNITYSDK_OFFSET(0x1E588DC0)

inline static constexpr unsigned int Class_1_E0DE9F490DD70B89_TypeDefinitionIndex = 34517;

class Class_1_E0DE9F490DD70B89 : public ::System::Object
{
public:
	static ::Class_1_E0DE9F490DD70B89** StaticGet_EMLNOINPICJ()
	{
		return (::Class_1_E0DE9F490DD70B89**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E0DE9F490DD70B89_TypeDefinitionIndex)->GetStaticField(0x5E120);
	}
	::System::Collections::Generic::SortedList_2<::System::String*, ::System::ValueTuple_2<::System::IO::MemoryMappedFiles::MemoryMappedFile*, ::System::Int32>>* LKEAPHDFKGJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0DE9F490DD70B89__CTOR_OFFSET))(this);
	}

	static ::Class_1_E0DE9F490DD70B89* Method_1_4B5B0B4E28D31F7A()
	{
		return ((::Class_1_E0DE9F490DD70B89*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E0DE9F490DD70B89_METHOD_1_4B5B0B4E28D31F7A_OFFSET))();
	}

	::System::IO::MemoryMappedFiles::MemoryMappedFile* Method_1_7740397CF427AAE7(::System::String* a1)
	{
		return ((::System::IO::MemoryMappedFiles::MemoryMappedFile*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E0DE9F490DD70B89_METHOD_1_7740397CF427AAE7_OFFSET))(this, a1);
	}

	::System::Void Method_1_87C7D8EC0E626C86(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E0DE9F490DD70B89_METHOD_1_87C7D8EC0E626C86_OFFSET))(this, a1);
	}

	::System::Void Method_1_51DEC44B986280C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0DE9F490DD70B89_METHOD_1_51DEC44B986280C0_OFFSET))(this);
	}

	::Il2CppArray<::System::String*>* Method_1_281A2023DEE5E80E()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0DE9F490DD70B89_METHOD_1_281A2023DEE5E80E_OFFSET))(this);
	}

	::System::Boolean Method_1_99250689080BB82A(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E0DE9F490DD70B89_METHOD_1_99250689080BB82A_OFFSET))(this, a1);
	}
};
