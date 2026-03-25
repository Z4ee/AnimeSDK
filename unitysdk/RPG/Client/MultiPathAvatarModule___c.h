#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_F3CA30716D4FAF92_4;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MULTIPATHAVATARMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9DA7AB0)
#define RPG_CLIENT_MULTIPATHAVATARMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9DA7AE0)
#define RPG_CLIENT_MULTIPATHAVATARMODULE___C__INITSERVERDATA_B__11_1_OFFSET UNITYSDK_OFFSET(0x9DA7AF0)
#define RPG_CLIENT_MULTIPATHAVATARMODULE___C__SETREQUESTUNLOCKEDMULTIPATHAVATARTYPES_B__26_0_OFFSET UNITYSDK_OFFSET(0x9DA7B10)
#define RPG_CLIENT_MULTIPATHAVATARMODULE___C__SYNCSERVERDATA_B__12_1_OFFSET UNITYSDK_OFFSET(0x9DA7B00)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiPathAvatarModule___c_TypeDefinitionIndex = 53921;

	class MultiPathAvatarModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_F3CA30716D4FAF92_4*>, ::Class_1_F3CA30716D4FAF92_4*>** StaticGet___9__12_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_F3CA30716D4FAF92_4*>, ::Class_1_F3CA30716D4FAF92_4*>**)Il2CppClass::FromTypeDefinitionIndex(MultiPathAvatarModule___c_TypeDefinitionIndex)->GetStaticField(0x44310);
		}
		static ::RPG::Client::MultiPathAvatarModule___c** StaticGet___9()
		{
			return (::RPG::Client::MultiPathAvatarModule___c**)Il2CppClass::FromTypeDefinitionIndex(MultiPathAvatarModule___c_TypeDefinitionIndex)->GetStaticField(0x44318);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_F3CA30716D4FAF92_4*>, ::Class_1_F3CA30716D4FAF92_4*>** StaticGet___9__11_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_F3CA30716D4FAF92_4*>, ::Class_1_F3CA30716D4FAF92_4*>**)Il2CppClass::FromTypeDefinitionIndex(MultiPathAvatarModule___c_TypeDefinitionIndex)->GetStaticField(0x44320);
		}
		static ::System::Func_2<::System::UInt32, ::Enum_3_DFCB42601400F441>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::System::UInt32, ::Enum_3_DFCB42601400F441>**)Il2CppClass::FromTypeDefinitionIndex(MultiPathAvatarModule___c_TypeDefinitionIndex)->GetStaticField(0x44328);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE___C__CTOR_OFFSET))(this);
		}

		::Class_1_F3CA30716D4FAF92_4* _InitServerData_b__11_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_F3CA30716D4FAF92_4*> data)
		{
			return ((::Class_1_F3CA30716D4FAF92_4*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_F3CA30716D4FAF92_4*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE___C__INITSERVERDATA_B__11_1_OFFSET))(this, data);
		}

		::Class_1_F3CA30716D4FAF92_4* _SyncServerData_b__12_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_F3CA30716D4FAF92_4*> data)
		{
			return ((::Class_1_F3CA30716D4FAF92_4*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_F3CA30716D4FAF92_4*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE___C__SYNCSERVERDATA_B__12_1_OFFSET))(this, data);
		}

		::Enum_3_DFCB42601400F441 _SetRequestUnlockedMultiPathAvatarTypes_b__26_0(::System::UInt32 x)
		{
			return ((::Enum_3_DFCB42601400F441(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE___C__SETREQUESTUNLOCKEDMULTIPATHAVATARTYPES_B__26_0_OFFSET))(this, x);
		}
	};
}
