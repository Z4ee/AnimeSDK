#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_1F1130A3BA9E01B4.h"
#include "unitysdk/MoleMole/Config/TeamProperty.h"
#include "unitysdk/Struct_2_F213AC3D3FBF57B9_1.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"

class Class_2_D456F475C91F9E7E;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_0D520D2CDCF46134_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x19A8B320)
#define CLASS_3_0D520D2CDCF46134_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x19A8B620)
#define CLASS_3_0D520D2CDCF46134_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x19A8B6B0)
#define CLASS_3_0D520D2CDCF46134_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x19A8AE20)
#define CLASS_3_0D520D2CDCF46134__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A8B370)
#define CLASS_3_0D520D2CDCF46134__CTOR_OFFSET UNITYSDK_OFFSET(0x19A8B3F0)

inline static constexpr unsigned int Class_3_0D520D2CDCF46134_TypeDefinitionIndex = 47812;

class Class_3_0D520D2CDCF46134 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::String* Field_3_8; // 0x0
	// static const ::System::String* Field_3_9; // 0x0
	// static const ::System::Int32 Field_3_10 = 0x72; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>*>* Field_3_6; // 0x48
	::Class_2_D456F475C91F9E7E* Field_3_5; // 0x50
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TeamProperty, ::Struct_2_F213AC3D3FBF57B9_1>* Field_3_3; // 0x58
	::Struct_2_FA5F50563E60AFBA Field_3_0; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::TeamProperty>* Field_3_4; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_7; // 0x80
	::Enum_3_1F1130A3BA9E01B4 Field_3_2; // 0x88
	::System::Double Field_3_1; // 0x90

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_0D520D2CDCF46134__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D520D2CDCF46134__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D520D2CDCF46134_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D520D2CDCF46134_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D520D2CDCF46134_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_0D520D2CDCF46134* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_0D520D2CDCF46134*(*)())((::PBYTE)hIl2Cpp + CLASS_3_0D520D2CDCF46134_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
