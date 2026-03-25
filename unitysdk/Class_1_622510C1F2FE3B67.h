#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightDivisionConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_622510C1F2FE3B67_METHOD_1_86F1330245A1FF66_OFFSET UNITYSDK_OFFSET(0x1152BD20)
#define CLASS_1_622510C1F2FE3B67_METHOD_1_87BD4DF5EA15A3A8_OFFSET UNITYSDK_OFFSET(0x1152BDE0)
#define CLASS_1_622510C1F2FE3B67__CTOR_OFFSET UNITYSDK_OFFSET(0x1152C100)

inline static constexpr unsigned int Class_1_622510C1F2FE3B67_TypeDefinitionIndex = 52462;

class Class_1_622510C1F2FE3B67 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::GridFightDivisionConfigRow*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::GridFightDivisionConfigRow*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_622510C1F2FE3B67_TypeDefinitionIndex)->GetStaticField(0x40CA0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_622510C1F2FE3B67__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::RPG::GameCore::GridFightDivisionConfigRow*>* Method_1_86F1330245A1FF66(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GridFightDivisionConfigRow*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_622510C1F2FE3B67_METHOD_1_86F1330245A1FF66_OFFSET))(a1);
	}

	static ::System::Void Method_1_87BD4DF5EA15A3A8()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_622510C1F2FE3B67_METHOD_1_87BD4DF5EA15A3A8_OFFSET))();
	}
};
