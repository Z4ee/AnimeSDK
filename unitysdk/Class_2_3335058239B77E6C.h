#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6A75E669C858F984.h"
#include "unitysdk/System/Collections/Generic/Comparer_1.h"

namespace RPG::GameCore { class BillboardIconConfigRow; }

#define CLASS_2_3335058239B77E6C_COMPARE_OFFSET UNITYSDK_OFFSET(0x18CC0A40)
#define CLASS_2_3335058239B77E6C_METHOD_2_64B6514CFF8F8D76_OFFSET UNITYSDK_OFFSET(0x18CC0BB0)
#define CLASS_2_3335058239B77E6C_METHOD_2_6E6A05200A9DB84E_OFFSET UNITYSDK_OFFSET(0x18CC0B10)
#define CLASS_2_3335058239B77E6C__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC0C20)

inline static constexpr unsigned int Class_2_3335058239B77E6C_TypeDefinitionIndex = 57325;

class Class_2_3335058239B77E6C : public ::System::Collections::Generic::Comparer_1<::Struct_2_6A75E669C858F984>
{
public:
	static ::Class_2_3335058239B77E6C** StaticGet_FLMODBLFAGD()
	{
		return (::Class_2_3335058239B77E6C**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3335058239B77E6C_TypeDefinitionIndex)->GetStaticField(0x60000);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3335058239B77E6C__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::Struct_2_6A75E669C858F984 a1, ::Struct_2_6A75E669C858F984 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_6A75E669C858F984, ::Struct_2_6A75E669C858F984))((::PBYTE)hIl2Cpp + CLASS_2_3335058239B77E6C_COMPARE_OFFSET))(this, a1, a2);
	}

	static ::Class_2_3335058239B77E6C* Method_2_64B6514CFF8F8D76()
	{
		return ((::Class_2_3335058239B77E6C*(*)())((::PBYTE)hIl2Cpp + CLASS_2_3335058239B77E6C_METHOD_2_64B6514CFF8F8D76_OFFSET))();
	}

	::RPG::GameCore::BillboardIconConfigRow* Method_2_6E6A05200A9DB84E(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::BillboardIconConfigRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3335058239B77E6C_METHOD_2_6E6A05200A9DB84E_OFFSET))(this, a1);
	}
};
