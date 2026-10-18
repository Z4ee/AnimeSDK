#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IDisposable; }

#define CLASS_1_F41BA62BC88DE172_CLASS_1_59510DFA3B0DF5E4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EC8F6D0)
#define CLASS_1_F41BA62BC88DE172_CLASS_1_59510DFA3B0DF5E4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC8F720)
#define CLASS_1_F41BA62BC88DE172_CLASS_1_59510DFA3B0DF5E4__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC8F710)

inline static constexpr unsigned int Class_1_F41BA62BC88DE172_Class_1_59510DFA3B0DF5E4_TypeDefinitionIndex = 44175;

class Class_1_F41BA62BC88DE172_Class_1_59510DFA3B0DF5E4 : public ::System::Object
{
public:
	static ::System::IDisposable** StaticGet_FMJPMFEDIJL()
	{
		return (::System::IDisposable**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F41BA62BC88DE172_Class_1_59510DFA3B0DF5E4_TypeDefinitionIndex)->GetStaticField(0x4E0D0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172_CLASS_1_59510DFA3B0DF5E4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172_CLASS_1_59510DFA3B0DF5E4__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172_CLASS_1_59510DFA3B0DF5E4_DISPOSE_OFFSET))(this);
	}
};
