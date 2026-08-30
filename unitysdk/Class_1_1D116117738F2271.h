#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightDivisionConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1D116117738F2271_METHOD_1_38354B5098E21DD1_OFFSET UNITYSDK_OFFSET(0x18F72A40)
#define CLASS_1_1D116117738F2271_METHOD_1_87BD4DF5EA15A3A8_OFFSET UNITYSDK_OFFSET(0x18F72AD0)
#define CLASS_1_1D116117738F2271__CTOR_OFFSET UNITYSDK_OFFSET(0x18F72E40)

inline static constexpr unsigned int Class_1_1D116117738F2271_TypeDefinitionIndex = 64630;

class Class_1_1D116117738F2271 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::GridFightDivisionConfigRow*>*>** StaticGet_FNHDMKOCAIF()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::GridFightDivisionConfigRow*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1D116117738F2271_TypeDefinitionIndex)->GetStaticField(0x1AAB0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D116117738F2271__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::RPG::GameCore::GridFightDivisionConfigRow*>* Method_1_38354B5098E21DD1(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GridFightDivisionConfigRow*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D116117738F2271_METHOD_1_38354B5098E21DD1_OFFSET))(a1);
	}

	static ::System::Void Method_1_87BD4DF5EA15A3A8()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1D116117738F2271_METHOD_1_87BD4DF5EA15A3A8_OFFSET))();
	}
};
