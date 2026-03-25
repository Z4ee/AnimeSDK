#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/System/Object.h"

class Class_1_49445DCF373ACBE2;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { template <typename T1, typename T2> class IndexedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_ABB37ED06833DBC5_METHOD_1_3CBB3CDC6679B8D0_OFFSET UNITYSDK_OFFSET(0x88A7A20)
#define CLASS_1_ABB37ED06833DBC5_METHOD_1_3F43B1DB2EA1B367_OFFSET UNITYSDK_OFFSET(0x88A7750)
#define CLASS_1_ABB37ED06833DBC5_METHOD_1_4EC2E1ECDEE1B9F2_OFFSET UNITYSDK_OFFSET(0x88A76C0)
#define CLASS_1_ABB37ED06833DBC5_METHOD_1_5A33717418B1F336_OFFSET UNITYSDK_OFFSET(0x88A6ED0)
#define CLASS_1_ABB37ED06833DBC5_METHOD_1_62593EE2FE331D20_OFFSET UNITYSDK_OFFSET(0x88A7550)
#define CLASS_1_ABB37ED06833DBC5_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x88A71F0)
#define CLASS_1_ABB37ED06833DBC5_METHOD_1_7C8C0AFEEF17C1DF_OFFSET UNITYSDK_OFFSET(0x88A7140)
#define CLASS_1_ABB37ED06833DBC5_METHOD_1_812B27EF664F59CD_OFFSET UNITYSDK_OFFSET(0x88A7080)
#define CLASS_1_ABB37ED06833DBC5_METHOD_1_83DA8FE11BEA9751_OFFSET UNITYSDK_OFFSET(0x88A65A0)
#define CLASS_1_ABB37ED06833DBC5_METHOD_1_89BD261A450D1047_OFFSET UNITYSDK_OFFSET(0x88A6BB0)
#define CLASS_1_ABB37ED06833DBC5__CCTOR_OFFSET UNITYSDK_OFFSET(0x88A7C90)
#define CLASS_1_ABB37ED06833DBC5__CTOR_OFFSET UNITYSDK_OFFSET(0x88A6550)

inline static constexpr unsigned int Class_1_ABB37ED06833DBC5_TypeDefinitionIndex = 48386;

class Class_1_ABB37ED06833DBC5 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_2()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ABB37ED06833DBC5_TypeDefinitionIndex)->GetStaticField(0x48F40);
	}
	::Collections::Pooled::PooledList_1<::System::UInt32>* Field_1_0; // 0x10
	::RPG::Client::IndexedDictionary_2<::System::UInt32, ::Class_1_49445DCF373ACBE2*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABB37ED06833DBC5__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ABB37ED06833DBC5__CCTOR_OFFSET))();
	}

	::System::Void Method_1_83DA8FE11BEA9751(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ABB37ED06833DBC5_METHOD_1_83DA8FE11BEA9751_OFFSET))(this, a1);
	}

	::System::Void Method_1_89BD261A450D1047(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ABB37ED06833DBC5_METHOD_1_89BD261A450D1047_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5A33717418B1F336(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ABB37ED06833DBC5_METHOD_1_5A33717418B1F336_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_812B27EF664F59CD(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ABB37ED06833DBC5_METHOD_1_812B27EF664F59CD_OFFSET))(this, a1);
	}

	::System::Void Method_1_7C8C0AFEEF17C1DF(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ABB37ED06833DBC5_METHOD_1_7C8C0AFEEF17C1DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABB37ED06833DBC5_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_1_62593EE2FE331D20()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABB37ED06833DBC5_METHOD_1_62593EE2FE331D20_OFFSET))(this);
	}

	::System::Boolean Method_1_4EC2E1ECDEE1B9F2(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ABB37ED06833DBC5_METHOD_1_4EC2E1ECDEE1B9F2_OFFSET))(this, a1);
	}

	::System::Void Method_1_3F43B1DB2EA1B367(::System::UInt32 a1, ::System::IntPtr a2, ::AKRESULT a3, ::System::Object* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::IntPtr, ::AKRESULT, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_ABB37ED06833DBC5_METHOD_1_3F43B1DB2EA1B367_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_3CBB3CDC6679B8D0(::System::UInt32 a1, ::System::IntPtr a2, ::AKRESULT a3, ::System::Object* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::IntPtr, ::AKRESULT, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_ABB37ED06833DBC5_METHOD_1_3CBB3CDC6679B8D0_OFFSET))(this, a1, a2, a3, a4);
	}
};
