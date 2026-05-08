#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::EffectSimulate { class NapEffectSimulatorComponent; }
namespace MoleMole::EffectSimulate { class NapEffectSimulatorMgr; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0D1481F350BC7477_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A40390)
#define CLASS_1_0D1481F350BC7477_METHOD_1_3A599F23178B2776_OFFSET UNITYSDK_OFFSET(0x13A40CF0)
#define CLASS_1_0D1481F350BC7477_METHOD_1_3B86CF5A1A661FA8_1_OFFSET UNITYSDK_OFFSET(0x13A410D0)
#define CLASS_1_0D1481F350BC7477_METHOD_1_3B86CF5A1A661FA8_OFFSET UNITYSDK_OFFSET(0x13A40CB0)
#define CLASS_1_0D1481F350BC7477_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x13A41080)
#define CLASS_1_0D1481F350BC7477_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x13A40560)
#define CLASS_1_0D1481F350BC7477_METHOD_1_C7A245A399C94E47_1_OFFSET UNITYSDK_OFFSET(0x13A40930)
#define CLASS_1_0D1481F350BC7477_METHOD_1_C7A245A399C94E47_OFFSET UNITYSDK_OFFSET(0x13A405E0)
#define CLASS_1_0D1481F350BC7477__CTOR_OFFSET UNITYSDK_OFFSET(0x13A403D0)

inline static constexpr unsigned int Class_1_0D1481F350BC7477_TypeDefinitionIndex = 67396;

class Class_1_0D1481F350BC7477 : public ::System::Object
{
public:
	static ::Class_1_0D1481F350BC7477** StaticGet_Field_1_1()
	{
		return (::Class_1_0D1481F350BC7477**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0D1481F350BC7477_TypeDefinitionIndex)->GetStaticField(0x2A780);
	}
	::System::Collections::Generic::HashSet_1<::MoleMole::EffectSimulate::NapEffectSimulatorMgr*>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D1481F350BC7477__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D1481F350BC7477_DISPOSE_OFFSET))(this);
	}

	static ::Class_1_0D1481F350BC7477* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_0D1481F350BC7477*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D1481F350BC7477_METHOD_1_9B39F7D7C1FF70D6_OFFSET))();
	}

	::System::Void Method_1_C7A245A399C94E47(::MoleMole::EffectSimulate::NapEffectSimulatorMgr* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::NapEffectSimulatorMgr*))((::PBYTE)hIl2Cpp + CLASS_1_0D1481F350BC7477_METHOD_1_C7A245A399C94E47_OFFSET))(this, a1);
	}

	::System::Void Method_1_C7A245A399C94E47_1(::MoleMole::EffectSimulate::NapEffectSimulatorMgr* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::NapEffectSimulatorMgr*))((::PBYTE)hIl2Cpp + CLASS_1_0D1481F350BC7477_METHOD_1_C7A245A399C94E47_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>* Method_1_3B86CF5A1A661FA8()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D1481F350BC7477_METHOD_1_3B86CF5A1A661FA8_OFFSET))(this);
	}

	::System::Void Method_1_3A599F23178B2776()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D1481F350BC7477_METHOD_1_3A599F23178B2776_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D1481F350BC7477_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>* Method_1_3B86CF5A1A661FA8_1()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D1481F350BC7477_METHOD_1_3B86CF5A1A661FA8_1_OFFSET))(this);
	}
};
