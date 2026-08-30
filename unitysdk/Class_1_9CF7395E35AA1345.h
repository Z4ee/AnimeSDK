#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/System/Object.h"

class Class_1_33DDE86A20ED342F;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { template <typename T1, typename T2> class IndexedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_9CF7395E35AA1345_METHOD_1_1524BC1543259399_OFFSET UNITYSDK_OFFSET(0x151F7F90)
#define CLASS_1_9CF7395E35AA1345_METHOD_1_1AB9D4E0D4B0F708_OFFSET UNITYSDK_OFFSET(0x151F6CD0)
#define CLASS_1_9CF7395E35AA1345_METHOD_1_2C99420120AD77F6_OFFSET UNITYSDK_OFFSET(0x151F7780)
#define CLASS_1_9CF7395E35AA1345_METHOD_1_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0x151F7D30)
#define CLASS_1_9CF7395E35AA1345_METHOD_1_4C568208EAD80509_OFFSET UNITYSDK_OFFSET(0x151F7070)
#define CLASS_1_9CF7395E35AA1345_METHOD_1_4EC2E1ECDEE1B9F2_OFFSET UNITYSDK_OFFSET(0x151F7F00)
#define CLASS_1_9CF7395E35AA1345_METHOD_1_5A33717418B1F336_OFFSET UNITYSDK_OFFSET(0x151F7500)
#define CLASS_1_9CF7395E35AA1345_METHOD_1_5EF072298F0A57D2_OFFSET UNITYSDK_OFFSET(0x151F8220)
#define CLASS_1_9CF7395E35AA1345_METHOD_1_6DC60149A270E0D4_OFFSET UNITYSDK_OFFSET(0x151F7830)
#define CLASS_1_9CF7395E35AA1345_METHOD_1_812B27EF664F59CD_OFFSET UNITYSDK_OFFSET(0x151F76C0)
#define CLASS_1_9CF7395E35AA1345__CCTOR_OFFSET UNITYSDK_OFFSET(0x151F8460)
#define CLASS_1_9CF7395E35AA1345__CTOR_OFFSET UNITYSDK_OFFSET(0x151F6C80)

inline static constexpr unsigned int Class_1_9CF7395E35AA1345_TypeDefinitionIndex = 59899;

class Class_1_9CF7395E35AA1345 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_OEJLMMLOODK()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CF7395E35AA1345_TypeDefinitionIndex)->GetStaticField(0x55520);
	}
	::RPG::Client::IndexedDictionary_2<::System::UInt32, ::Class_1_33DDE86A20ED342F*>* MCCNAFIBBNF; // 0x10
	::Collections::Pooled::PooledList_1<::System::UInt32>* FLAELIKONOC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CF7395E35AA1345__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9CF7395E35AA1345__CCTOR_OFFSET))();
	}

	::System::Void Method_1_1AB9D4E0D4B0F708(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9CF7395E35AA1345_METHOD_1_1AB9D4E0D4B0F708_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C568208EAD80509(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CF7395E35AA1345_METHOD_1_4C568208EAD80509_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5A33717418B1F336(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CF7395E35AA1345_METHOD_1_5A33717418B1F336_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_812B27EF664F59CD(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9CF7395E35AA1345_METHOD_1_812B27EF664F59CD_OFFSET))(this, a1);
	}

	::System::Void Method_1_2C99420120AD77F6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9CF7395E35AA1345_METHOD_1_2C99420120AD77F6_OFFSET))(this, a1);
	}

	::System::Void Method_1_6DC60149A270E0D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CF7395E35AA1345_METHOD_1_6DC60149A270E0D4_OFFSET))(this);
	}

	::System::Void Method_1_4A41C63BFE58D26F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CF7395E35AA1345_METHOD_1_4A41C63BFE58D26F_OFFSET))(this);
	}

	::System::Boolean Method_1_4EC2E1ECDEE1B9F2(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9CF7395E35AA1345_METHOD_1_4EC2E1ECDEE1B9F2_OFFSET))(this, a1);
	}

	::System::Void Method_1_1524BC1543259399(::System::UInt32 a1, ::System::IntPtr a2, ::AKRESULT a3, ::System::Object* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::IntPtr, ::AKRESULT, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9CF7395E35AA1345_METHOD_1_1524BC1543259399_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_5EF072298F0A57D2(::System::UInt32 a1, ::System::IntPtr a2, ::AKRESULT a3, ::System::Object* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::IntPtr, ::AKRESULT, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9CF7395E35AA1345_METHOD_1_5EF072298F0A57D2_OFFSET))(this, a1, a2, a3, a4);
	}
};
