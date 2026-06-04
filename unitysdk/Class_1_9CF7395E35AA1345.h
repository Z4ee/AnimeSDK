#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/System/Object.h"

class Class_1_33DDE86A20ED342F;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { template <typename T1, typename T2> class IndexedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_9CF7395E35AA1345_METHOD_1_1524BC1543259399_OFFSET UNITYSDK_OFFSET(0xAF446E0)
#define CLASS_1_9CF7395E35AA1345_METHOD_1_4EC2E1ECDEE1B9F2_OFFSET UNITYSDK_OFFSET(0xAF44650)
#define CLASS_1_9CF7395E35AA1345_METHOD_1_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0xAF444A0)
#define CLASS_1_9CF7395E35AA1345_METHOD_1_5EF072298F0A57D2_OFFSET UNITYSDK_OFFSET(0xAF44970)
#define CLASS_1_9CF7395E35AA1345_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0xAF44130)
#define CLASS_1_9CF7395E35AA1345_METHOD_1_812B27EF664F59CD_OFFSET UNITYSDK_OFFSET(0xAF43FD0)
#define CLASS_1_9CF7395E35AA1345_METHOD_1_8B6CCAB22CD6DA6F_OFFSET UNITYSDK_OFFSET(0xAF434B0)
#define CLASS_1_9CF7395E35AA1345_METHOD_1_9ED7BD05EE24180A_OFFSET UNITYSDK_OFFSET(0xAF43AF0)
#define CLASS_1_9CF7395E35AA1345_METHOD_1_A4DD19D60472DA8F_OFFSET UNITYSDK_OFFSET(0xAF43E10)
#define CLASS_1_9CF7395E35AA1345_METHOD_1_D77F7476BCD66744_OFFSET UNITYSDK_OFFSET(0xAF44080)
#define CLASS_1_9CF7395E35AA1345__CCTOR_OFFSET UNITYSDK_OFFSET(0xAF44BB0)
#define CLASS_1_9CF7395E35AA1345__CTOR_OFFSET UNITYSDK_OFFSET(0xAF43460)

inline static constexpr unsigned int Class_1_9CF7395E35AA1345_TypeDefinitionIndex = 55868;

class Class_1_9CF7395E35AA1345 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_0()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CF7395E35AA1345_TypeDefinitionIndex)->GetStaticField(0x3CFA0);
	}
	::Collections::Pooled::PooledList_1<::System::UInt32>* Field_1_1; // 0x10
	::RPG::Client::IndexedDictionary_2<::System::UInt32, ::Class_1_33DDE86A20ED342F*>* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CF7395E35AA1345__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9CF7395E35AA1345__CCTOR_OFFSET))();
	}

	::System::Void Method_1_8B6CCAB22CD6DA6F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9CF7395E35AA1345_METHOD_1_8B6CCAB22CD6DA6F_OFFSET))(this, a1);
	}

	::System::Void Method_1_9ED7BD05EE24180A(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CF7395E35AA1345_METHOD_1_9ED7BD05EE24180A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A4DD19D60472DA8F(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CF7395E35AA1345_METHOD_1_A4DD19D60472DA8F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_812B27EF664F59CD(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9CF7395E35AA1345_METHOD_1_812B27EF664F59CD_OFFSET))(this, a1);
	}

	::System::Void Method_1_D77F7476BCD66744(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9CF7395E35AA1345_METHOD_1_D77F7476BCD66744_OFFSET))(this, a1);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CF7395E35AA1345_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_1_5BCE9210F4ACDD0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CF7395E35AA1345_METHOD_1_5BCE9210F4ACDD0B_OFFSET))(this);
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
