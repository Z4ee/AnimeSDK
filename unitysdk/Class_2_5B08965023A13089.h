#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FAF146B3D74C3C3F.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5B08965023A13089_METHOD_2_C1E0405EEC95DC65_OFFSET UNITYSDK_OFFSET(0xAB7CDA0)
#define CLASS_2_5B08965023A13089_METHOD_2_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0xAB7D000)
#define CLASS_2_5B08965023A13089_METHOD_2_F24608F372387DA4_OFFSET UNITYSDK_OFFSET(0xAB7D0E0)
#define CLASS_2_5B08965023A13089__CTOR_OFFSET UNITYSDK_OFFSET(0xAB7CA60)

inline static constexpr unsigned int Class_2_5B08965023A13089_TypeDefinitionIndex = 74460;

class Class_2_5B08965023A13089 : public ::Class_1_FAF146B3D74C3C3F
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_5B08965023A13089_TypeDefinitionIndex)->GetStaticField(0x46E0);
	}
	::System::Type* Field_2_1; // 0x20
	::System::String* Field_2_2; // 0x28
	::System::Collections::Generic::List_1<::Class_1_FAF146B3D74C3C3F*>* Field_2_3; // 0x30
	::System::String* Field_2_4; // 0x38
	::RPG::Client::CachedAssetLogicType Field_2_5; // 0x40

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_5B08965023A13089__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_C1E0405EEC95DC65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B08965023A13089_METHOD_2_C1E0405EEC95DC65_OFFSET))(this);
	}

	::System::Void Method_2_CFC95121222309BD(::Class_1_FAF146B3D74C3C3F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FAF146B3D74C3C3F*))((::PBYTE)hIl2Cpp + CLASS_2_5B08965023A13089_METHOD_2_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_F24608F372387DA4(::Class_1_FAF146B3D74C3C3F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FAF146B3D74C3C3F*))((::PBYTE)hIl2Cpp + CLASS_2_5B08965023A13089_METHOD_2_F24608F372387DA4_OFFSET))(this, a1);
	}
};
