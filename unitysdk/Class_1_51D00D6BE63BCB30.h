#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightDivisionLevelShowRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_51D00D6BE63BCB30_METHOD_1_87BD4DF5EA15A3A8_OFFSET UNITYSDK_OFFSET(0x171FD8A0)
#define CLASS_1_51D00D6BE63BCB30_METHOD_1_AD9031F16AB17530_OFFSET UNITYSDK_OFFSET(0x171FD810)
#define CLASS_1_51D00D6BE63BCB30__CTOR_OFFSET UNITYSDK_OFFSET(0x171FDC10)

inline static constexpr unsigned int Class_1_51D00D6BE63BCB30_TypeDefinitionIndex = 61647;

class Class_1_51D00D6BE63BCB30 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::GridFightDivisionLevelShowRow*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::GridFightDivisionLevelShowRow*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_51D00D6BE63BCB30_TypeDefinitionIndex)->GetStaticField(0x320F0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51D00D6BE63BCB30__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::RPG::GameCore::GridFightDivisionLevelShowRow*>* Method_1_AD9031F16AB17530(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GridFightDivisionLevelShowRow*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_51D00D6BE63BCB30_METHOD_1_AD9031F16AB17530_OFFSET))(a1);
	}

	static ::System::Void Method_1_87BD4DF5EA15A3A8()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_51D00D6BE63BCB30_METHOD_1_87BD4DF5EA15A3A8_OFFSET))();
	}
};
