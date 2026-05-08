#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F00B40DBB5A83F85;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_ADFE59216C2BC3C9___C_METHOD_1_8E8225D5C438C827_OFFSET UNITYSDK_OFFSET(0x10B1B360)
#define CLASS_2_ADFE59216C2BC3C9___C_METHOD_1_FB0EDEF64D42DFEF_OFFSET UNITYSDK_OFFSET(0x10B1B3C0)
#define CLASS_2_ADFE59216C2BC3C9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B1B310)
#define CLASS_2_ADFE59216C2BC3C9___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10B1B350)

inline static constexpr unsigned int Class_2_ADFE59216C2BC3C9___c_TypeDefinitionIndex = 55324;

class Class_2_ADFE59216C2BC3C9___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__24_0()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_ADFE59216C2BC3C9___c_TypeDefinitionIndex)->GetStaticField(0x462B0);
	}
	static ::System::Comparison_1<::Class_1_F00B40DBB5A83F85*>** StaticGet___9__12_0()
	{
		return (::System::Comparison_1<::Class_1_F00B40DBB5A83F85*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_ADFE59216C2BC3C9___c_TypeDefinitionIndex)->GetStaticField(0x462B8);
	}
	static ::Class_2_ADFE59216C2BC3C9___c** StaticGet___9()
	{
		return (::Class_2_ADFE59216C2BC3C9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_ADFE59216C2BC3C9___c_TypeDefinitionIndex)->GetStaticField(0x462C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_ADFE59216C2BC3C9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADFE59216C2BC3C9___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_8E8225D5C438C827(::Class_1_F00B40DBB5A83F85* a1, ::Class_1_F00B40DBB5A83F85* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_F00B40DBB5A83F85*, ::Class_1_F00B40DBB5A83F85*))((::PBYTE)hIl2Cpp + CLASS_2_ADFE59216C2BC3C9___C_METHOD_1_8E8225D5C438C827_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_FB0EDEF64D42DFEF(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_ADFE59216C2BC3C9___C_METHOD_1_FB0EDEF64D42DFEF_OFFSET))(this, a1, a2);
	}
};
