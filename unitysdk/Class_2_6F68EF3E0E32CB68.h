#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1C30CE192ABE4C54.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/Struct_2_B59D99363F8EDC06.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6F68EF3E0E32CB68_METHOD_2_1CFAD5EA252913A9_OFFSET UNITYSDK_OFFSET(0x13C11FB0)
#define CLASS_2_6F68EF3E0E32CB68_METHOD_2_52344AA2986E588C_OFFSET UNITYSDK_OFFSET(0x13C12230)
#define CLASS_2_6F68EF3E0E32CB68_METHOD_2_6F4AEB3218D76E85_OFFSET UNITYSDK_OFFSET(0x13C116D0)
#define CLASS_2_6F68EF3E0E32CB68_METHOD_2_8372105B14BB623E_OFFSET UNITYSDK_OFFSET(0x13C11EE0)
#define CLASS_2_6F68EF3E0E32CB68_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x13C11E50)
#define CLASS_2_6F68EF3E0E32CB68_METHOD_2_98EBA63C78F236FE_OFFSET UNITYSDK_OFFSET(0x13C12240)
#define CLASS_2_6F68EF3E0E32CB68_METHOD_2_A64DFBBFCE3CE276_OFFSET UNITYSDK_OFFSET(0x13C11DB0)
#define CLASS_2_6F68EF3E0E32CB68_METHOD_2_A85929AC597CFAEF_OFFSET UNITYSDK_OFFSET(0x13C11430)
#define CLASS_2_6F68EF3E0E32CB68_METHOD_2_C86F71D5DA5AC9D3_OFFSET UNITYSDK_OFFSET(0x13C120A0)
#define CLASS_2_6F68EF3E0E32CB68_METHOD_2_DAFB0CB11B77534F_OFFSET UNITYSDK_OFFSET(0x13C11900)
#define CLASS_2_6F68EF3E0E32CB68__CTOR_OFFSET UNITYSDK_OFFSET(0x13C12150)

inline static constexpr unsigned int Class_2_6F68EF3E0E32CB68_TypeDefinitionIndex = 53094;

class Class_2_6F68EF3E0E32CB68 : public ::Class_1_1C30CE192ABE4C54
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::Collections::Generic::List_1<::Struct_2_B59D99363F8EDC06>*>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F68EF3E0E32CB68__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A85929AC597CFAEF(::RPG::GameCore::StringHash a1, ::System::String* a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_6F68EF3E0E32CB68_METHOD_2_A85929AC597CFAEF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6F4AEB3218D76E85(::RPG::GameCore::StringHash a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6F68EF3E0E32CB68_METHOD_2_6F4AEB3218D76E85_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DAFB0CB11B77534F(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6F68EF3E0E32CB68_METHOD_2_DAFB0CB11B77534F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A64DFBBFCE3CE276(::RPG::GameCore::StringHash a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_2_6F68EF3E0E32CB68_METHOD_2_A64DFBBFCE3CE276_OFFSET))(this, a1);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F68EF3E0E32CB68_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_8372105B14BB623E(::RPG::GameCore::StringHash a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_2_6F68EF3E0E32CB68_METHOD_2_8372105B14BB623E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1CFAD5EA252913A9(::RPG::GameCore::StringHash a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_2_6F68EF3E0E32CB68_METHOD_2_1CFAD5EA252913A9_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint>>* Method_2_C86F71D5DA5AC9D3()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F68EF3E0E32CB68_METHOD_2_C86F71D5DA5AC9D3_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_52344AA2986E588C(::RPG::GameCore::StringHash a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_2_6F68EF3E0E32CB68_METHOD_2_52344AA2986E588C_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_98EBA63C78F236FE(::RPG::GameCore::StringHash a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_2_6F68EF3E0E32CB68_METHOD_2_98EBA63C78F236FE_OFFSET))(this, a1, a2);
	}
};
