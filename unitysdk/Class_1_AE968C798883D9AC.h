#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/UnityEngine/Rect.h"

#define CLASS_1_AE968C798883D9AC_METHOD_1_266360BF9A87DB5C_OFFSET UNITYSDK_OFFSET(0x12DAFBC0)
#define CLASS_1_AE968C798883D9AC_METHOD_1_39C14CC2A9A687B1_OFFSET UNITYSDK_OFFSET(0x12DB0280)
#define CLASS_1_AE968C798883D9AC_METHOD_1_616710126FE6F057_OFFSET UNITYSDK_OFFSET(0x12DAF7E0)
#define CLASS_1_AE968C798883D9AC_METHOD_1_9488DBFCA16BB671_1_OFFSET UNITYSDK_OFFSET(0x12DB01D0)
#define CLASS_1_AE968C798883D9AC_METHOD_1_9488DBFCA16BB671_OFFSET UNITYSDK_OFFSET(0x12DB0120)
#define CLASS_1_AE968C798883D9AC__CCTOR_OFFSET UNITYSDK_OFFSET(0x12DAF7C0)

inline static constexpr unsigned int Class_1_AE968C798883D9AC_TypeDefinitionIndex = 60138;

class Class_1_AE968C798883D9AC : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE968C798883D9AC_TypeDefinitionIndex)->GetStaticField(0xF530);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE968C798883D9AC_TypeDefinitionIndex)->GetStaticField(0xF534);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE968C798883D9AC__CCTOR_OFFSET))();
	}

	static ::System::Single Method_1_616710126FE6F057(::System::Boolean a1)
	{
		return ((::System::Single(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AE968C798883D9AC_METHOD_1_616710126FE6F057_OFFSET))(a1);
	}

	static ::System::ValueTuple_4<::UnityEngine::Rect, ::System::Int32, ::System::Int32, ::System::Single> Method_1_266360BF9A87DB5C()
	{
		return ((::System::ValueTuple_4<::UnityEngine::Rect, ::System::Int32, ::System::Int32, ::System::Single>(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE968C798883D9AC_METHOD_1_266360BF9A87DB5C_OFFSET))();
	}

	static ::UnityEngine::Rect Method_1_9488DBFCA16BB671(::System::Single a1)
	{
		return ((::UnityEngine::Rect(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AE968C798883D9AC_METHOD_1_9488DBFCA16BB671_OFFSET))(a1);
	}

	static ::UnityEngine::Rect Method_1_9488DBFCA16BB671_1(::System::Single a1)
	{
		return ((::UnityEngine::Rect(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AE968C798883D9AC_METHOD_1_9488DBFCA16BB671_1_OFFSET))(a1);
	}

	static ::System::ValueTuple_4<::UnityEngine::Rect, ::System::Int32, ::System::Int32, ::System::Single> Method_1_39C14CC2A9A687B1()
	{
		return ((::System::ValueTuple_4<::UnityEngine::Rect, ::System::Int32, ::System::Int32, ::System::Single>(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE968C798883D9AC_METHOD_1_39C14CC2A9A687B1_OFFSET))();
	}
};
