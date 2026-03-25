#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6A75E669C858F984.h"
#include "unitysdk/System/Collections/Generic/Comparer_1.h"

namespace RPG::GameCore { class BillboardIconConfigRow; }

#define CLASS_2_3335058239B77E6C_COMPARE_OFFSET UNITYSDK_OFFSET(0x10BEC980)
#define CLASS_2_3335058239B77E6C_METHOD_2_64B6514CFF8F8D76_OFFSET UNITYSDK_OFFSET(0x10BECAF0)
#define CLASS_2_3335058239B77E6C_METHOD_2_F4AF27B610EB9205_OFFSET UNITYSDK_OFFSET(0x10BECA50)
#define CLASS_2_3335058239B77E6C__CTOR_OFFSET UNITYSDK_OFFSET(0x10BECB60)

inline static constexpr unsigned int Class_2_3335058239B77E6C_TypeDefinitionIndex = 46027;

class Class_2_3335058239B77E6C : public ::System::Collections::Generic::Comparer_1<::Struct_2_6A75E669C858F984>
{
public:
	static ::Class_2_3335058239B77E6C** StaticGet_Field_2_0()
	{
		return (::Class_2_3335058239B77E6C**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3335058239B77E6C_TypeDefinitionIndex)->GetStaticField(0x2BEF0);
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

	::RPG::GameCore::BillboardIconConfigRow* Method_2_F4AF27B610EB9205(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::BillboardIconConfigRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3335058239B77E6C_METHOD_2_F4AF27B610EB9205_OFFSET))(this, a1);
	}
};
