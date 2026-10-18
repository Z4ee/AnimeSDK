#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap::FiveDim { class CartographyFiveDim; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_0D6BF3DCE494A078_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D436A0)
#define CLASS_1_0D6BF3DCE494A078_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15D43680)
#define CLASS_1_0D6BF3DCE494A078_METHOD_1_3608D218C7E0F964_OFFSET UNITYSDK_OFFSET(0x15D435E0)
#define CLASS_1_0D6BF3DCE494A078_METHOD_1_47EDBC4CA1AB8BEE_OFFSET UNITYSDK_OFFSET(0x15D432C0)
#define CLASS_1_0D6BF3DCE494A078_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x15D43630)
#define CLASS_1_0D6BF3DCE494A078_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15D43690)
#define CLASS_1_0D6BF3DCE494A078__CTOR_OFFSET UNITYSDK_OFFSET(0x15D43230)

inline static constexpr unsigned int Class_1_0D6BF3DCE494A078_TypeDefinitionIndex = 74660;

class Class_1_0D6BF3DCE494A078 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* AMGOFIHIOEK; // 0x10
	::RPG::Client::NavMap::FiveDim::CartographyFiveDim* NJEIIMCMDFN; // 0x18
	::System::Int32 _Current_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::Client::NavMap::FiveDim::CartographyFiveDim* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::CartographyFiveDim*))((::PBYTE)hIl2Cpp + CLASS_1_0D6BF3DCE494A078__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_3608D218C7E0F964(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0D6BF3DCE494A078_METHOD_1_3608D218C7E0F964_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D6BF3DCE494A078_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 get_Current()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D6BF3DCE494A078_GET_CURRENT_OFFSET))(this);
	}

	::System::Void set_Current(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0D6BF3DCE494A078_SET_CURRENT_OFFSET))(this, a1);
	}

	::System::Void Method_1_47EDBC4CA1AB8BEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D6BF3DCE494A078_METHOD_1_47EDBC4CA1AB8BEE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D6BF3DCE494A078_DISPOSE_OFFSET))(this);
	}
};
