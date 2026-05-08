#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace MoleMole::Config { class AssetIndexContainer; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_B6748CD119853962_METHOD_1_2021B859A2915C17_1_OFFSET UNITYSDK_OFFSET(0x10B1EAF0)
#define CLASS_1_B6748CD119853962_METHOD_1_2021B859A2915C17_OFFSET UNITYSDK_OFFSET(0x10B1EA90)
#define CLASS_1_B6748CD119853962_METHOD_1_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x10B1E800)
#define CLASS_1_B6748CD119853962_METHOD_1_2F003ADB717A419B_OFFSET UNITYSDK_OFFSET(0x10B1EB50)
#define CLASS_1_B6748CD119853962_METHOD_1_520EA699FA7E4AB2_OFFSET UNITYSDK_OFFSET(0x10B1FD00)
#define CLASS_1_B6748CD119853962_METHOD_1_52E1E5341129B11A_OFFSET UNITYSDK_OFFSET(0x10B1F290)
#define CLASS_1_B6748CD119853962_METHOD_1_5E50A972BF5341A8_OFFSET UNITYSDK_OFFSET(0x10B1EF60)
#define CLASS_1_B6748CD119853962_METHOD_1_70087F4B88D46C26_OFFSET UNITYSDK_OFFSET(0x10B1E770)
#define CLASS_1_B6748CD119853962_METHOD_1_8ACEBC2DB01CE17B_OFFSET UNITYSDK_OFFSET(0x10B1FF90)
#define CLASS_1_B6748CD119853962_METHOD_1_A8AB44356FA0B9C9_OFFSET UNITYSDK_OFFSET(0x10B1EDB0)
#define CLASS_1_B6748CD119853962_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10B20200)
#define CLASS_1_B6748CD119853962__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B20250)
#define CLASS_1_B6748CD119853962__CTOR_OFFSET UNITYSDK_OFFSET(0x10B20240)

inline static constexpr unsigned int Class_1_B6748CD119853962_TypeDefinitionIndex = 46736;

class Class_1_B6748CD119853962 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::Foundation::ResourceFileType>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::Foundation::ResourceFileType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B6748CD119853962_TypeDefinitionIndex)->GetStaticField(0x31BC0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6748CD119853962__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B6748CD119853962__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::HashSet_1<::Foundation::ResourceFileType>* Method_1_70087F4B88D46C26()
	{
		return ((::System::Collections::Generic::HashSet_1<::Foundation::ResourceFileType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6748CD119853962_METHOD_1_70087F4B88D46C26_OFFSET))(this);
	}

	::System::Void Method_1_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6748CD119853962_METHOD_1_21886A8411E71157_OFFSET))(this);
	}

	::System::Boolean Method_1_2021B859A2915C17(::System::Boolean& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B6748CD119853962_METHOD_1_2021B859A2915C17_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A8AB44356FA0B9C9(::Foundation::ResourceFileType a1, ::System::Boolean a2, ::System::Boolean& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Boolean, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B6748CD119853962_METHOD_1_A8AB44356FA0B9C9_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt64>* Method_1_8ACEBC2DB01CE17B()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6748CD119853962_METHOD_1_8ACEBC2DB01CE17B_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6748CD119853962_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_2F003ADB717A419B(::System::Boolean a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B6748CD119853962_METHOD_1_2F003ADB717A419B_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_3<::System::Boolean, ::System::Boolean, ::MoleMole::Config::AssetIndexContainer*> Method_1_5E50A972BF5341A8(::Foundation::ResourceFileType a1, ::System::Boolean a2)
	{
		return ((::System::ValueTuple_3<::System::Boolean, ::System::Boolean, ::MoleMole::Config::AssetIndexContainer*>(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B6748CD119853962_METHOD_1_5E50A972BF5341A8_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_52E1E5341129B11A(::MoleMole::Config::AssetIndexContainer*& a1, ::Foundation::ResourceFileType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::Config::AssetIndexContainer*&, ::Foundation::ResourceFileType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B6748CD119853962_METHOD_1_52E1E5341129B11A_OFFSET))(a1, a2, a3);
	}

	::System::Boolean Method_1_2021B859A2915C17_1(::System::Boolean& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B6748CD119853962_METHOD_1_2021B859A2915C17_1_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_520EA699FA7E4AB2(::MoleMole::Config::AssetIndexContainer*& a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::AssetIndexContainer*&))((::PBYTE)hIl2Cpp + CLASS_1_B6748CD119853962_METHOD_1_520EA699FA7E4AB2_OFFSET))(a1);
	}
};
