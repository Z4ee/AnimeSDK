#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F5DD75F05D4E3DC0_METHOD_1_050AA269690E657E_OFFSET UNITYSDK_OFFSET(0x198D4400)
#define CLASS_1_F5DD75F05D4E3DC0__CCTOR_OFFSET UNITYSDK_OFFSET(0x198D44F0)

inline static constexpr unsigned int Class_1_F5DD75F05D4E3DC0_TypeDefinitionIndex = 35661;

class Class_1_F5DD75F05D4E3DC0 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::Object*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5DD75F05D4E3DC0_TypeDefinitionIndex)->GetStaticField(0x4DBC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F5DD75F05D4E3DC0__CCTOR_OFFSET))();
	}

	static ::System::Object* Method_1_050AA269690E657E(::System::RuntimeTypeHandle a1)
	{
		return ((::System::Object*(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + CLASS_1_F5DD75F05D4E3DC0_METHOD_1_050AA269690E657E_OFFSET))(a1);
	}
};
