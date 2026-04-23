#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6309529EF246F8B2.h"
#include "unitysdk/System/Object.h"

class Class_1_C75DDA89CCB3A76B;
class Class_2_13EBA5CA9AAD2A68;
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_A85CE06D77ECCC00_METHOD_1_958065522D415F43_OFFSET UNITYSDK_OFFSET(0x1183D9E0)
#define CLASS_1_A85CE06D77ECCC00_METHOD_1_979F687A22CC9A41_OFFSET UNITYSDK_OFFSET(0x1183DCC0)
#define CLASS_1_A85CE06D77ECCC00_METHOD_1_CFAE4A19CDCB7CB0_OFFSET UNITYSDK_OFFSET(0x1183E010)
#define CLASS_1_A85CE06D77ECCC00_METHOD_1_DBAFB3822F104C31_OFFSET UNITYSDK_OFFSET(0x1183DEE0)
#define CLASS_1_A85CE06D77ECCC00_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x1183D940)
#define CLASS_1_A85CE06D77ECCC00_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x1183D990)
#define CLASS_1_A85CE06D77ECCC00__CTOR_OFFSET UNITYSDK_OFFSET(0x1183E070)

inline static constexpr unsigned int Class_1_A85CE06D77ECCC00_TypeDefinitionIndex = 49880;

class Class_1_A85CE06D77ECCC00 : public ::System::Object
{
public:
	::System::Collections::Generic::Stack_1<::System::Int32>* Field_1_1; // 0x10
	::RPG::GameCore::GameWorld* Field_1_0; // 0x18
	::Il2CppArray<::Class_2_13EBA5CA9AAD2A68*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A85CE06D77ECCC00__CTOR_OFFSET))(this);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_A85CE06D77ECCC00_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A85CE06D77ECCC00_ONPLUGINUNINIT_OFFSET))(this);
	}

	::System::Void Method_1_958065522D415F43(::System::Int32 a1, ::Struct_2_6309529EF246F8B2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Struct_2_6309529EF246F8B2))((::PBYTE)hIl2Cpp + CLASS_1_A85CE06D77ECCC00_METHOD_1_958065522D415F43_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_979F687A22CC9A41(::Class_1_C75DDA89CCB3A76B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C75DDA89CCB3A76B*))((::PBYTE)hIl2Cpp + CLASS_1_A85CE06D77ECCC00_METHOD_1_979F687A22CC9A41_OFFSET))(this, a1);
	}

	::System::Void Method_1_DBAFB3822F104C31(::Class_1_C75DDA89CCB3A76B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C75DDA89CCB3A76B*))((::PBYTE)hIl2Cpp + CLASS_1_A85CE06D77ECCC00_METHOD_1_DBAFB3822F104C31_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_CFAE4A19CDCB7CB0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A85CE06D77ECCC00_METHOD_1_CFAE4A19CDCB7CB0_OFFSET))(this);
	}
};
