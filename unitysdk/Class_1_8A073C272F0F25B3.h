#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_8A073C272F0F25B3_METHOD_1_163DC9A61F1D3AF0_OFFSET UNITYSDK_OFFSET(0x10F2AAD0)
#define CLASS_1_8A073C272F0F25B3_METHOD_1_415752109343FC19_OFFSET UNITYSDK_OFFSET(0x10F2A460)
#define CLASS_1_8A073C272F0F25B3_METHOD_1_5CB4730819E7D478_OFFSET UNITYSDK_OFFSET(0x10F2ABF0)
#define CLASS_1_8A073C272F0F25B3_METHOD_1_77BC484DA531C1E6_OFFSET UNITYSDK_OFFSET(0x10F2A610)
#define CLASS_1_8A073C272F0F25B3_METHOD_1_96C7FAA41B688781_OFFSET UNITYSDK_OFFSET(0x10F2A6A0)
#define CLASS_1_8A073C272F0F25B3_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x10F2AA40)
#define CLASS_1_8A073C272F0F25B3__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F2A450)

inline static constexpr unsigned int Class_1_8A073C272F0F25B3_TypeDefinitionIndex = 90983;

class Class_1_8A073C272F0F25B3 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigHollowChessboard** StaticGet_Field_1_7()
	{
		return (::MoleMole::Config::ConfigHollowChessboard**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A073C272F0F25B3_TypeDefinitionIndex)->GetStaticField(0x315A0);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A073C272F0F25B3_TypeDefinitionIndex)->GetStaticField(0xAB10);
	}
	static ::System::Boolean* StaticGet_Field_1_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A073C272F0F25B3_TypeDefinitionIndex)->GetStaticField(0xAB11);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A073C272F0F25B3__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_415752109343FC19(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8A073C272F0F25B3_METHOD_1_415752109343FC19_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_77BC484DA531C1E6(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8A073C272F0F25B3_METHOD_1_77BC484DA531C1E6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_96C7FAA41B688781(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8A073C272F0F25B3_METHOD_1_96C7FAA41B688781_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A073C272F0F25B3_METHOD_1_F730968E2645E14B_OFFSET))();
	}

	static ::System::Void Method_1_163DC9A61F1D3AF0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A073C272F0F25B3_METHOD_1_163DC9A61F1D3AF0_OFFSET))();
	}

	static ::MoleMole::Config::ConfigHollowChessboard* Method_1_5CB4730819E7D478()
	{
		return ((::MoleMole::Config::ConfigHollowChessboard*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A073C272F0F25B3_METHOD_1_5CB4730819E7D478_OFFSET))();
	}
};
