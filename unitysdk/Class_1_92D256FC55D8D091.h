#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class HollowEntityConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_92D256FC55D8D091_METHOD_1_1D59AFAC87004A77_OFFSET UNITYSDK_OFFSET(0x1D5B93D0)
#define CLASS_1_92D256FC55D8D091_METHOD_1_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x1D5B9610)
#define CLASS_1_92D256FC55D8D091_METHOD_1_292D21097F93B3C1_OFFSET UNITYSDK_OFFSET(0x1D5B98D0)
#define CLASS_1_92D256FC55D8D091_METHOD_1_2A2A9FD85678D7DB_OFFSET UNITYSDK_OFFSET(0x1D5B97B0)
#define CLASS_1_92D256FC55D8D091_METHOD_1_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x1D5B9500)
#define CLASS_1_92D256FC55D8D091_METHOD_1_44C6956149352354_1_OFFSET UNITYSDK_OFFSET(0x1D5B9340)
#define CLASS_1_92D256FC55D8D091_METHOD_1_44C6956149352354_OFFSET UNITYSDK_OFFSET(0x1D5B92B0)
#define CLASS_1_92D256FC55D8D091_METHOD_1_4D3C68EB13957338_OFFSET UNITYSDK_OFFSET(0x1D5B9130)
#define CLASS_1_92D256FC55D8D091__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5B9090)

inline static constexpr unsigned int Class_1_92D256FC55D8D091_TypeDefinitionIndex = 47984;

class Class_1_92D256FC55D8D091 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowEntityConfig*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowEntityConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_92D256FC55D8D091_TypeDefinitionIndex)->GetStaticField(0x3B140);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_92D256FC55D8D091__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_4D3C68EB13957338(::System::UInt32 a1, ::System::String* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowEntityConfig*>* a3)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowEntityConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_92D256FC55D8D091_METHOD_1_4D3C68EB13957338_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::IEnumerator* Method_1_44C6956149352354(::System::Single a1, ::System::Action_1<::System::Single>* a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_92D256FC55D8D091_METHOD_1_44C6956149352354_OFFSET))(a1, a2);
	}

	static ::System::Collections::IEnumerator* Method_1_44C6956149352354_1(::System::Single a1, ::System::Action_1<::System::Single>* a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_92D256FC55D8D091_METHOD_1_44C6956149352354_1_OFFSET))(a1, a2);
	}

	static ::MoleMole::HollowEntityConfig* Method_1_1D59AFAC87004A77(::System::UInt32 a1)
	{
		return ((::MoleMole::HollowEntityConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_92D256FC55D8D091_METHOD_1_1D59AFAC87004A77_OFFSET))(a1);
	}

	static ::System::Void Method_1_4389275F4099DE36()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_92D256FC55D8D091_METHOD_1_4389275F4099DE36_OFFSET))();
	}

	static ::System::Void Method_1_2A2A9FD85678D7DB(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_92D256FC55D8D091_METHOD_1_2A2A9FD85678D7DB_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_292D21097F93B3C1(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_92D256FC55D8D091_METHOD_1_292D21097F93B3C1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_229CEF33F0AF9039()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_92D256FC55D8D091_METHOD_1_229CEF33F0AF9039_OFFSET))();
	}
};
