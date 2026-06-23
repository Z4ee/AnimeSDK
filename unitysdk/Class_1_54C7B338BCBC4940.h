#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_54C7B338BCBC4940_Class_1_65CE1143634E4F1D;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define CLASS_1_54C7B338BCBC4940_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x15AD2CF0)
#define CLASS_1_54C7B338BCBC4940_METHOD_1_3DF0E93836661F08_OFFSET UNITYSDK_OFFSET(0x15AD2DD0)
#define CLASS_1_54C7B338BCBC4940_METHOD_1_4C1CDB522EC9EDDB_OFFSET UNITYSDK_OFFSET(0x15AD2EB0)
#define CLASS_1_54C7B338BCBC4940_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x15AD2F70)
#define CLASS_1_54C7B338BCBC4940_METHOD_1_B1892B18A32D9900_OFFSET UNITYSDK_OFFSET(0x15AD2D40)
#define CLASS_1_54C7B338BCBC4940__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15AD2B90)
#define CLASS_1_54C7B338BCBC4940__CTOR_OFFSET UNITYSDK_OFFSET(0x15AD2B80)

inline static constexpr unsigned int Class_1_54C7B338BCBC4940_TypeDefinitionIndex = 46276;

class Class_1_54C7B338BCBC4940 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_54C7B338BCBC4940_Class_1_65CE1143634E4F1D*>* Field_1_4; // 0x10
	::UnityEngine::Material* Field_1_1; // 0x18
	::UnityEngine::Color Field_1_2; // 0x20
	::UnityEngine::Color Field_1_3; // 0x30
	::System::Int32 Field_1_0; // 0x40

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

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54C7B338BCBC4940_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}
};
