#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D611BC3F2C0A31B5_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A45B2C0)
#define CLASS_1_D611BC3F2C0A31B5_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1A45B170)
#define CLASS_1_D611BC3F2C0A31B5_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1A45B4E0)
#define CLASS_1_D611BC3F2C0A31B5_METHOD_1_241D2AFD7C4CDE5B_OFFSET UNITYSDK_OFFSET(0x1A45B730)
#define CLASS_1_D611BC3F2C0A31B5_METHOD_1_5FB8120EAA10CD1F_OFFSET UNITYSDK_OFFSET(0x1A45B5B0)
#define CLASS_1_D611BC3F2C0A31B5_METHOD_1_7B2415EF3B4401A0_OFFSET UNITYSDK_OFFSET(0x1A45B620)
#define CLASS_1_D611BC3F2C0A31B5_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0x1A45B540)
#define CLASS_1_D611BC3F2C0A31B5_METHOD_1_F00276A0DE918F56_1_OFFSET UNITYSDK_OFFSET(0x1A45B460)
#define CLASS_1_D611BC3F2C0A31B5_METHOD_1_F00276A0DE918F56_OFFSET UNITYSDK_OFFSET(0x1A45B3E0)
#define CLASS_1_D611BC3F2C0A31B5_METHOD_1_F0DC4324C0841393_OFFSET UNITYSDK_OFFSET(0x1A45B6C0)
#define CLASS_1_D611BC3F2C0A31B5_METHOD_1_F5D2B8B014A6F84F_OFFSET UNITYSDK_OFFSET(0x1A45B1C0)
#define CLASS_1_D611BC3F2C0A31B5_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A45B340)
#define CLASS_1_D611BC3F2C0A31B5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A45B280)
#define CLASS_1_D611BC3F2C0A31B5__CTOR_OFFSET UNITYSDK_OFFSET(0x1A45B240)

inline static constexpr unsigned int Class_1_D611BC3F2C0A31B5_TypeDefinitionIndex = 71316;

class Class_1_D611BC3F2C0A31B5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::UIController*>* FEKJHAMIJOB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D611BC3F2C0A31B5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D611BC3F2C0A31B5__CTOR_1_OFFSET))(this, a1);
	}

	::System::Int32 get_Count()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D611BC3F2C0A31B5_GET_COUNT_OFFSET))(this);
	}

	::RPG::Client::UIController* Method_1_F5D2B8B014A6F84F(::System::Int32 a1)
	{
		return ((::RPG::Client::UIController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D611BC3F2C0A31B5_METHOD_1_F5D2B8B014A6F84F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::RPG::Client::UIController*>* GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::UIController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D611BC3F2C0A31B5_GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D611BC3F2C0A31B5_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::RPG::Client::UIController* Method_1_F00276A0DE918F56()
	{
		return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D611BC3F2C0A31B5_METHOD_1_F00276A0DE918F56_OFFSET))(this);
	}

	::RPG::Client::UIController* Method_1_F00276A0DE918F56_1()
	{
		return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D611BC3F2C0A31B5_METHOD_1_F00276A0DE918F56_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D611BC3F2C0A31B5_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D611BC3F2C0A31B5_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Void Method_1_5FB8120EAA10CD1F(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_D611BC3F2C0A31B5_METHOD_1_5FB8120EAA10CD1F_OFFSET))(this, a1);
	}

	::System::Void Method_1_F0DC4324C0841393(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_D611BC3F2C0A31B5_METHOD_1_F0DC4324C0841393_OFFSET))(this, a1);
	}

	::RPG::Client::UIController* Method_1_241D2AFD7C4CDE5B(::System::Predicate_1<::RPG::Client::UIController*>* a1)
	{
		return ((::RPG::Client::UIController*(*)(::PVOID, ::System::Predicate_1<::RPG::Client::UIController*>*))((::PBYTE)hIl2Cpp + CLASS_1_D611BC3F2C0A31B5_METHOD_1_241D2AFD7C4CDE5B_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_7B2415EF3B4401A0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D611BC3F2C0A31B5_METHOD_1_7B2415EF3B4401A0_OFFSET))(this);
	}
};
