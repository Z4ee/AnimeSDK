#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/RPG/GameCore/LittleGameSmartObjectSlotGroup.h"
#include "unitysdk/Struct_2_6765FFF36726974B.h"
#include "unitysdk/System/Object.h"

class Class_1_938C223DA5C0C9C7;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FA6AB3C88A3E6365_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159A73B0)
#define CLASS_1_FA6AB3C88A3E6365_METHOD_1_29B796571048B50A_OFFSET UNITYSDK_OFFSET(0x159A8060)
#define CLASS_1_FA6AB3C88A3E6365_METHOD_1_307B4A456C012FCA_OFFSET UNITYSDK_OFFSET(0x159A7EA0)
#define CLASS_1_FA6AB3C88A3E6365_METHOD_1_6DFEF4918C679AF0_OFFSET UNITYSDK_OFFSET(0x159A74B0)
#define CLASS_1_FA6AB3C88A3E6365_METHOD_1_889E15060A54A5A2_OFFSET UNITYSDK_OFFSET(0x159A7590)
#define CLASS_1_FA6AB3C88A3E6365_METHOD_1_A62A1AC9DDB217F9_OFFSET UNITYSDK_OFFSET(0x159A7980)
#define CLASS_1_FA6AB3C88A3E6365_METHOD_1_A89EA1662E3EE826_OFFSET UNITYSDK_OFFSET(0x159A7620)
#define CLASS_1_FA6AB3C88A3E6365_METHOD_1_CBBB30978BA34B92_OFFSET UNITYSDK_OFFSET(0x159A78D0)
#define CLASS_1_FA6AB3C88A3E6365_METHOD_1_CEF1E65DBFFD4B76_OFFSET UNITYSDK_OFFSET(0x159A7C10)
#define CLASS_1_FA6AB3C88A3E6365_METHOD_1_F7CD01B30A4DFC65_OFFSET UNITYSDK_OFFSET(0x159A7B80)
#define CLASS_1_FA6AB3C88A3E6365__CTOR_OFFSET UNITYSDK_OFFSET(0x159A72F0)

inline static constexpr unsigned int Class_1_FA6AB3C88A3E6365_TypeDefinitionIndex = 76054;

class Class_1_FA6AB3C88A3E6365 : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_FABJHECANMK()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FA6AB3C88A3E6365_TypeDefinitionIndex)->GetStaticField(0x12180);
	}
	::System::Collections::Generic::List_1<::Class_1_938C223DA5C0C9C7*>* PBFNEKNAGKI; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_938C223DA5C0C9C7*>* LKNHKKKELKJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA6AB3C88A3E6365__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA6AB3C88A3E6365_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_6DFEF4918C679AF0(::Class_1_938C223DA5C0C9C7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_938C223DA5C0C9C7*))((::PBYTE)hIl2Cpp + CLASS_1_FA6AB3C88A3E6365_METHOD_1_6DFEF4918C679AF0_OFFSET))(this, a1);
	}

	::System::Void Method_1_889E15060A54A5A2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA6AB3C88A3E6365_METHOD_1_889E15060A54A5A2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A89EA1662E3EE826(::Struct_2_6765FFF36726974B a1, ::System::Collections::Generic::List_1<::Class_1_938C223DA5C0C9C7*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_6765FFF36726974B, ::System::Collections::Generic::List_1<::Class_1_938C223DA5C0C9C7*>*&))((::PBYTE)hIl2Cpp + CLASS_1_FA6AB3C88A3E6365_METHOD_1_A89EA1662E3EE826_OFFSET))(this, a1, a2);
	}

	::Class_1_938C223DA5C0C9C7* Method_1_CBBB30978BA34B92(::System::UInt32 a1)
	{
		return ((::Class_1_938C223DA5C0C9C7*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA6AB3C88A3E6365_METHOD_1_CBBB30978BA34B92_OFFSET))(this, a1);
	}

	::Class_1_938C223DA5C0C9C7* Method_1_A62A1AC9DDB217F9(::Struct_2_6765FFF36726974B a1)
	{
		return ((::Class_1_938C223DA5C0C9C7*(*)(::PVOID, ::Struct_2_6765FFF36726974B))((::PBYTE)hIl2Cpp + CLASS_1_FA6AB3C88A3E6365_METHOD_1_A62A1AC9DDB217F9_OFFSET))(this, a1);
	}

	::Class_1_938C223DA5C0C9C7* Method_1_F7CD01B30A4DFC65(::Struct_2_6765FFF36726974B a1, ::System::Int32& a2)
	{
		return ((::Class_1_938C223DA5C0C9C7*(*)(::PVOID, ::Struct_2_6765FFF36726974B, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_FA6AB3C88A3E6365_METHOD_1_F7CD01B30A4DFC65_OFFSET))(this, a1, a2);
	}

	::Class_1_938C223DA5C0C9C7* Method_1_CEF1E65DBFFD4B76(::Struct_2_6765FFF36726974B a1, ::System::Int32& a2)
	{
		return ((::Class_1_938C223DA5C0C9C7*(*)(::PVOID, ::Struct_2_6765FFF36726974B, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_FA6AB3C88A3E6365_METHOD_1_CEF1E65DBFFD4B76_OFFSET))(this, a1, a2);
	}

	static ::System::Int32 Method_1_307B4A456C012FCA(::Class_1_938C223DA5C0C9C7* a1, ::RPG::GameCore::LittleGameSmartObjectSlotGroup a2, ::RPG::GameCore::LittleGameEntityType a3)
	{
		return ((::System::Int32(*)(::Class_1_938C223DA5C0C9C7*, ::RPG::GameCore::LittleGameSmartObjectSlotGroup, ::RPG::GameCore::LittleGameEntityType))((::PBYTE)hIl2Cpp + CLASS_1_FA6AB3C88A3E6365_METHOD_1_307B4A456C012FCA_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_29B796571048B50A(::Class_1_938C223DA5C0C9C7* a1, ::RPG::GameCore::LittleGameSmartObjectSlotGroup a2, ::RPG::GameCore::LittleGameEntityType a3)
	{
		return ((::System::Int32(*)(::Class_1_938C223DA5C0C9C7*, ::RPG::GameCore::LittleGameSmartObjectSlotGroup, ::RPG::GameCore::LittleGameEntityType))((::PBYTE)hIl2Cpp + CLASS_1_FA6AB3C88A3E6365_METHOD_1_29B796571048B50A_OFFSET))(a1, a2, a3);
	}
};
