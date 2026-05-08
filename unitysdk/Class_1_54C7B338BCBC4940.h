#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_54C7B338BCBC4940_Class_1_65CE1143634E4F1D;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define CLASS_1_54C7B338BCBC4940_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xE883620)
#define CLASS_1_54C7B338BCBC4940_METHOD_1_3DF0E93836661F08_OFFSET UNITYSDK_OFFSET(0xE883850)
#define CLASS_1_54C7B338BCBC4940_METHOD_1_4C1CDB522EC9EDDB_OFFSET UNITYSDK_OFFSET(0xE883930)
#define CLASS_1_54C7B338BCBC4940_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xE883700)
#define CLASS_1_54C7B338BCBC4940_METHOD_1_B1892B18A32D9900_OFFSET UNITYSDK_OFFSET(0xE883670)
#define CLASS_1_54C7B338BCBC4940__CTOR_1_OFFSET UNITYSDK_OFFSET(0xE8834C0)
#define CLASS_1_54C7B338BCBC4940__CTOR_OFFSET UNITYSDK_OFFSET(0xE8834B0)

inline static constexpr unsigned int Class_1_54C7B338BCBC4940_TypeDefinitionIndex = 43095;

class Class_1_54C7B338BCBC4940 : public ::System::Object
{
public:
	::UnityEngine::Material* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_54C7B338BCBC4940_Class_1_65CE1143634E4F1D*>* Field_1_4; // 0x18
	::UnityEngine::Color Field_1_3; // 0x20
	::System::Int32 Field_1_0; // 0x30
	::UnityEngine::Color Field_1_2; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54C7B338BCBC4940__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_54C7B338BCBC4940__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1892B18A32D9900(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_54C7B338BCBC4940_METHOD_1_B1892B18A32D9900_OFFSET))(this, a1);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54C7B338BCBC4940_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	::Class_1_54C7B338BCBC4940_Class_1_65CE1143634E4F1D* Method_1_3DF0E93836661F08()
	{
		return ((::Class_1_54C7B338BCBC4940_Class_1_65CE1143634E4F1D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54C7B338BCBC4940_METHOD_1_3DF0E93836661F08_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54C7B338BCBC4940_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_4C1CDB522EC9EDDB(::Class_1_54C7B338BCBC4940_Class_1_65CE1143634E4F1D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_54C7B338BCBC4940_Class_1_65CE1143634E4F1D*))((::PBYTE)hIl2Cpp + CLASS_1_54C7B338BCBC4940_METHOD_1_4C1CDB522EC9EDDB_OFFSET))(this, a1);
	}
};
