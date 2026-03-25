#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEmoBlendShapesController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9EFBE27577E50792_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11795E80)
#define CLASS_1_9EFBE27577E50792_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x11795210)
#define CLASS_1_9EFBE27577E50792_METHOD_1_1E1B584909E026DF_1_OFFSET UNITYSDK_OFFSET(0x11795620)
#define CLASS_1_9EFBE27577E50792_METHOD_1_1E1B584909E026DF_OFFSET UNITYSDK_OFFSET(0x117953E0)
#define CLASS_1_9EFBE27577E50792_METHOD_1_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x11795740)
#define CLASS_1_9EFBE27577E50792_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x11795240)
#define CLASS_1_9EFBE27577E50792_METHOD_1_47F50B259C23D1F5_OFFSET UNITYSDK_OFFSET(0x11795C50)
#define CLASS_1_9EFBE27577E50792_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x11795230)
#define CLASS_1_9EFBE27577E50792_METHOD_1_B2B9BE80C02A1CED_OFFSET UNITYSDK_OFFSET(0x117952D0)
#define CLASS_1_9EFBE27577E50792_METHOD_1_B5CAE9FCBDDD7C20_OFFSET UNITYSDK_OFFSET(0x11795500)
#define CLASS_1_9EFBE27577E50792_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x117952C0)
#define CLASS_1_9EFBE27577E50792_SET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x11795220)
#define CLASS_1_9EFBE27577E50792__CCTOR_OFFSET UNITYSDK_OFFSET(0x11795ED0)
#define CLASS_1_9EFBE27577E50792__CTOR_OFFSET UNITYSDK_OFFSET(0x117959E0)

inline static constexpr unsigned int Class_1_9EFBE27577E50792_TypeDefinitionIndex = 58285;

class Class_1_9EFBE27577E50792 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Field_1_5()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EFBE27577E50792_TypeDefinitionIndex)->GetStaticField(0x44EB0);
	}
	static ::System::UInt32* StaticGet_Field_1_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EFBE27577E50792_TypeDefinitionIndex)->GetStaticField(0x11D10);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_1_6; // 0x10
	::RPG::Client::MonoEmoBlendShapesController* _Controller_k__BackingField; // 0x18
	::System::Single Field_1_4; // 0x20
	::System::Boolean Field_1_3; // 0x24
	::System::UInt32 Field_1_1; // 0x28

	::System::Void _ctor(::RPG::Client::MonoEmoBlendShapesController* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEmoBlendShapesController*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9EFBE27577E50792__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9EFBE27577E50792__CCTOR_OFFSET))();
	}

	::RPG::Client::MonoEmoBlendShapesController* get_Controller()
	{
		return ((::RPG::Client::MonoEmoBlendShapesController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EFBE27577E50792_GET_CONTROLLER_OFFSET))(this);
	}

	::System::Void set_Controller(::RPG::Client::MonoEmoBlendShapesController* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEmoBlendShapesController*))((::PBYTE)hIl2Cpp + CLASS_1_9EFBE27577E50792_SET_CONTROLLER_OFFSET))(this, value);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EFBE27577E50792_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9EFBE27577E50792_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EFBE27577E50792_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single Method_1_B2B9BE80C02A1CED(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9EFBE27577E50792_METHOD_1_B2B9BE80C02A1CED_OFFSET))(this, a1);
	}

	::System::Void Method_1_1E1B584909E026DF(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9EFBE27577E50792_METHOD_1_1E1B584909E026DF_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_B5CAE9FCBDDD7C20(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9EFBE27577E50792_METHOD_1_B5CAE9FCBDDD7C20_OFFSET))(this, a1);
	}

	::System::Void Method_1_1E1B584909E026DF_1(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9EFBE27577E50792_METHOD_1_1E1B584909E026DF_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EFBE27577E50792_METHOD_1_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_1_47F50B259C23D1F5(::Class_1_9EFBE27577E50792* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9EFBE27577E50792*))((::PBYTE)hIl2Cpp + CLASS_1_9EFBE27577E50792_METHOD_1_47F50B259C23D1F5_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EFBE27577E50792_DISPOSE_OFFSET))(this);
	}
};
