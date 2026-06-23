#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BubbleProgressColorType.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/SpecialDamageTextType.h"
#include "unitysdk/Share/EHollowQuestType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

class BubbleProgressColor;
namespace Foundation { class Assets_ConfigHashSetTrim; }
namespace Foundation { class ConfigDiffPatcher; }
namespace MoleMole { class AreaPositionConfig; }
namespace MoleMole { class ConfigDownloader; }
namespace MoleMole { class ConfigGeneralIconBadgeColor; }
namespace MoleMole { class DepositoryPageTabConfigs; }
namespace MoleMole { class ItemIconTweenConfig; }
namespace MoleMole { class NewConfigUICommon; }
namespace MoleMole { class UITokenShowConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_040D367E0BFBBC0B_OFFSET UNITYSDK_OFFSET(0x11FAD290)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_0EE3DC26D5C08679_OFFSET UNITYSDK_OFFSET(0x11FADD40)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_11E65074F3057FE0_OFFSET UNITYSDK_OFFSET(0x11FA9D10)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_151B00B2432B9D6D_OFFSET UNITYSDK_OFFSET(0x11FAB730)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_1B44FB549CC907DD_1_OFFSET UNITYSDK_OFFSET(0x11FAAC60)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_1B44FB549CC907DD_2_OFFSET UNITYSDK_OFFSET(0x11FAB170)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_1B44FB549CC907DD_3_OFFSET UNITYSDK_OFFSET(0x11FAC4B0)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_1B44FB549CC907DD_4_OFFSET UNITYSDK_OFFSET(0x11FAD090)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_1B44FB549CC907DD_5_OFFSET UNITYSDK_OFFSET(0x11FAD590)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_1B44FB549CC907DD_6_OFFSET UNITYSDK_OFFSET(0x11FAD960)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_1B44FB549CC907DD_7_OFFSET UNITYSDK_OFFSET(0x11FAE210)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_1B44FB549CC907DD_OFFSET UNITYSDK_OFFSET(0x11FA9B10)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_35215B9015BB3E3E_OFFSET UNITYSDK_OFFSET(0x11FA9040)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_419DD5BD13201470_OFFSET UNITYSDK_OFFSET(0x11FABFF0)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_43A91FA91370FFB4_1_OFFSET UNITYSDK_OFFSET(0x11FAE410)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_43A91FA91370FFB4_2_OFFSET UNITYSDK_OFFSET(0x11FAED00)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_43A91FA91370FFB4_OFFSET UNITYSDK_OFFSET(0x11FACEF0)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_445853E363A46B4A_1_OFFSET UNITYSDK_OFFSET(0x11FABA50)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_445853E363A46B4A_OFFSET UNITYSDK_OFFSET(0x11FAAE60)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_46A696FA5C09F46A_OFFSET UNITYSDK_OFFSET(0x11FACBA0)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_4A32E495376EA3D4_OFFSET UNITYSDK_OFFSET(0x11FA8D40)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11FAC860)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_5D7997EA06ECF7D4_OFFSET UNITYSDK_OFFSET(0x11FA8860)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_5E6103C1273C6030_OFFSET UNITYSDK_OFFSET(0x11FAD780)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_5F6516E9DB6A33D8_OFFSET UNITYSDK_OFFSET(0x11FAE030)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_616C36F0B9D51885_1_OFFSET UNITYSDK_OFFSET(0x11FAA210)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_616C36F0B9D51885_2_OFFSET UNITYSDK_OFFSET(0x11FABD60)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_616C36F0B9D51885_3_OFFSET UNITYSDK_OFFSET(0x11FAE790)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_616C36F0B9D51885_4_OFFSET UNITYSDK_OFFSET(0x11FAEB10)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_616C36F0B9D51885_5_OFFSET UNITYSDK_OFFSET(0x11FAF240)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_616C36F0B9D51885_OFFSET UNITYSDK_OFFSET(0x11FA9760)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_6579793DA8CD178F_1_OFFSET UNITYSDK_OFFSET(0x11FAC6A0)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_6579793DA8CD178F_OFFSET UNITYSDK_OFFSET(0x11FA9950)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_68C96174839CE630_OFFSET UNITYSDK_OFFSET(0x11FAE980)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_6A9BD1042227F6A0_OFFSET UNITYSDK_OFFSET(0x11FAB640)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_6E1B60F95467B489_OFFSET UNITYSDK_OFFSET(0x11FAC1D0)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_75D1C6BD8F5F4737_OFFSET UNITYSDK_OFFSET(0x11FAB400)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_82B9A67BB62C3375_OFFSET UNITYSDK_OFFSET(0x11FAC8B0)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_861970C5F2C21AB2_1_OFFSET UNITYSDK_OFFSET(0x11FA8FA0)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_861970C5F2C21AB2_2_OFFSET UNITYSDK_OFFSET(0x11FA94E0)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_861970C5F2C21AB2_3_OFFSET UNITYSDK_OFFSET(0x11FAA170)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_861970C5F2C21AB2_4_OFFSET UNITYSDK_OFFSET(0x11FAB360)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_861970C5F2C21AB2_5_OFFSET UNITYSDK_OFFSET(0x11FAB5A0)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0x11FA87C0)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_9332559544844A9F_OFFSET UNITYSDK_OFFSET(0x11FA9F30)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_975716F3207EFD8C_1_OFFSET UNITYSDK_OFFSET(0x11FAEEA0)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_975716F3207EFD8C_OFFSET UNITYSDK_OFFSET(0x11FA9220)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_9CDE78116C0150A2_OFFSET UNITYSDK_OFFSET(0x11FAA8B0)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_A246486EC6D6444C_OFFSET UNITYSDK_OFFSET(0x11FAC180)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_A300D74BF378930D_OFFSET UNITYSDK_OFFSET(0x11FAA400)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_A7CA5F0D122792CD_OFFSET UNITYSDK_OFFSET(0x11FADB60)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_A8C92BDAB1FA5A5A_OFFSET UNITYSDK_OFFSET(0x11FA9FB0)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_B7A1115782E29C04_OFFSET UNITYSDK_OFFSET(0x11FA9580)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_CDB6D8A85869878E_OFFSET UNITYSDK_OFFSET(0x11FAF430)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_E4D7C1998AA82588_OFFSET UNITYSDK_OFFSET(0x11FAA730)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_E7FF0182A60EFD75_OFFSET UNITYSDK_OFFSET(0x11FAE5B0)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_F7B5A3941878E340_1_OFFSET UNITYSDK_OFFSET(0x11FAF160)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_F7B5A3941878E340_OFFSET UNITYSDK_OFFSET(0x11FABF50)
#define CLASS_1_8F84CBAF7E25A53F_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x11FAF200)

inline static constexpr unsigned int Class_1_8F84CBAF7E25A53F_TypeDefinitionIndex = 81602;

class Class_1_8F84CBAF7E25A53F : public ::System::Object
{
public:
	static ::MoleMole::NewConfigUICommon** StaticGet_Field_1_0()
	{
		return (::MoleMole::NewConfigUICommon**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8F84CBAF7E25A53F_TypeDefinitionIndex)->GetStaticField(0x43870);
	}

	static ::System::Single Method_1_861970C5F2C21AB2()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_861970C5F2C21AB2_OFFSET))();
	}

	static ::UnityEngine::Color Method_1_5D7997EA06ECF7D4(::System::String* a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Color(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_5D7997EA06ECF7D4_OFFSET))(a1, a2);
	}

	static ::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_1_4A32E495376EA3D4()
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_4A32E495376EA3D4_OFFSET))();
	}

	static ::System::Single Method_1_861970C5F2C21AB2_1()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_861970C5F2C21AB2_1_OFFSET))();
	}

	static ::MoleMole::ConfigDownloader* Method_1_35215B9015BB3E3E()
	{
		return ((::MoleMole::ConfigDownloader*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_35215B9015BB3E3E_OFFSET))();
	}

	static ::System::Int32 Method_1_975716F3207EFD8C(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_975716F3207EFD8C_OFFSET))(a1);
	}

	static ::System::Single Method_1_861970C5F2C21AB2_2()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_861970C5F2C21AB2_2_OFFSET))();
	}

	static ::MoleMole::DepositoryPageTabConfigs* Method_1_B7A1115782E29C04()
	{
		return ((::MoleMole::DepositoryPageTabConfigs*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_B7A1115782E29C04_OFFSET))();
	}

	static ::UnityEngine::Color Method_1_616C36F0B9D51885()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_616C36F0B9D51885_OFFSET))();
	}

	static ::UnityEngine::Color Method_1_6579793DA8CD178F(::System::Int32 a1)
	{
		return ((::UnityEngine::Color(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_6579793DA8CD178F_OFFSET))(a1);
	}

	static ::System::Single Method_1_1B44FB549CC907DD()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_1B44FB549CC907DD_OFFSET))();
	}

	static ::System::Void Method_1_11E65074F3057FE0(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_11E65074F3057FE0_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_9332559544844A9F(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_9332559544844A9F_OFFSET))(a1);
	}

	static ::UnityEngine::Color Method_1_A8C92BDAB1FA5A5A(::System::String* a1)
	{
		return ((::UnityEngine::Color(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_A8C92BDAB1FA5A5A_OFFSET))(a1);
	}

	static ::System::Single Method_1_861970C5F2C21AB2_3()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_861970C5F2C21AB2_3_OFFSET))();
	}

	static ::UnityEngine::Color Method_1_616C36F0B9D51885_1()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_616C36F0B9D51885_1_OFFSET))();
	}

	static ::UnityEngine::Color Method_1_A300D74BF378930D(::System::String* a1)
	{
		return ((::UnityEngine::Color(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_A300D74BF378930D_OFFSET))(a1);
	}

	static ::System::Single Method_1_E4D7C1998AA82588()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_E4D7C1998AA82588_OFFSET))();
	}

	static ::UnityEngine::Color Method_1_9CDE78116C0150A2(::System::Int32 a1)
	{
		return ((::UnityEngine::Color(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_9CDE78116C0150A2_OFFSET))(a1);
	}

	static ::System::Single Method_1_1B44FB549CC907DD_1()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_1B44FB549CC907DD_1_OFFSET))();
	}

	static ::System::Single Method_1_445853E363A46B4A(::MoleMole::Config::SpecialDamageTextType a1)
	{
		return ((::System::Single(*)(::MoleMole::Config::SpecialDamageTextType))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_445853E363A46B4A_OFFSET))(a1);
	}

	static ::System::Single Method_1_1B44FB549CC907DD_2()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_1B44FB549CC907DD_2_OFFSET))();
	}

	static ::System::Single Method_1_861970C5F2C21AB2_4()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_861970C5F2C21AB2_4_OFFSET))();
	}

	static ::UnityEngine::Vector2 Method_1_75D1C6BD8F5F4737(::System::String* a1)
	{
		return ((::UnityEngine::Vector2(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_75D1C6BD8F5F4737_OFFSET))(a1);
	}

	static ::System::Single Method_1_861970C5F2C21AB2_5()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_861970C5F2C21AB2_5_OFFSET))();
	}

	static ::System::Void Method_1_6A9BD1042227F6A0(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_6A9BD1042227F6A0_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_445853E363A46B4A_1(::MoleMole::Config::SpecialDamageTextType a1)
	{
		return ((::System::Single(*)(::MoleMole::Config::SpecialDamageTextType))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_445853E363A46B4A_1_OFFSET))(a1);
	}

	static ::UnityEngine::Color Method_1_616C36F0B9D51885_2()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_616C36F0B9D51885_2_OFFSET))();
	}

	static ::UnityEngine::AnimationCurve* Method_1_F7B5A3941878E340()
	{
		return ((::UnityEngine::AnimationCurve*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_F7B5A3941878E340_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::MoleMole::UITokenShowConfig*>* Method_1_419DD5BD13201470(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UITokenShowConfig*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_419DD5BD13201470_OFFSET))(a1);
	}

	static ::MoleMole::NewConfigUICommon* Method_1_A246486EC6D6444C()
	{
		return ((::MoleMole::NewConfigUICommon*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_A246486EC6D6444C_OFFSET))();
	}

	static ::UnityEngine::Color Method_1_6E1B60F95467B489(::Share::EHollowQuestType a1)
	{
		return ((::UnityEngine::Color(*)(::Share::EHollowQuestType))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_6E1B60F95467B489_OFFSET))(a1);
	}

	static ::System::Single Method_1_1B44FB549CC907DD_3()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_1B44FB549CC907DD_3_OFFSET))();
	}

	static ::UnityEngine::Color Method_1_6579793DA8CD178F_1(::System::Int32 a1)
	{
		return ((::UnityEngine::Color(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_6579793DA8CD178F_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Boolean Method_1_82B9A67BB62C3375(::Foundation::AssetPath a1, ::Foundation::AssetPath& a2)
	{
		return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_82B9A67BB62C3375_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_46A696FA5C09F46A(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_46A696FA5C09F46A_OFFSET))(a1);
	}

	static ::System::String* Method_1_43A91FA91370FFB4(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_43A91FA91370FFB4_OFFSET))(a1);
	}

	static ::System::Single Method_1_1B44FB549CC907DD_4()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_1B44FB549CC907DD_4_OFFSET))();
	}

	static ::System::String* Method_1_040D367E0BFBBC0B(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::String*(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_040D367E0BFBBC0B_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_1B44FB549CC907DD_5()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_1B44FB549CC907DD_5_OFFSET))();
	}

	static ::System::Void Method_1_151B00B2432B9D6D(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_151B00B2432B9D6D_OFFSET))(a1, a2);
	}

	static ::MoleMole::ItemIconTweenConfig* Method_1_5E6103C1273C6030()
	{
		return ((::MoleMole::ItemIconTweenConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_5E6103C1273C6030_OFFSET))();
	}

	static ::System::Single Method_1_1B44FB549CC907DD_6()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_1B44FB549CC907DD_6_OFFSET))();
	}

	static ::Foundation::Assets_ConfigHashSetTrim* Method_1_A7CA5F0D122792CD()
	{
		return ((::Foundation::Assets_ConfigHashSetTrim*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_A7CA5F0D122792CD_OFFSET))();
	}

	static ::BubbleProgressColor* Method_1_0EE3DC26D5C08679(::BubbleProgressColorType a1)
	{
		return ((::BubbleProgressColor*(*)(::BubbleProgressColorType))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_0EE3DC26D5C08679_OFFSET))(a1);
	}

	static ::Foundation::ConfigDiffPatcher* Method_1_5F6516E9DB6A33D8()
	{
		return ((::Foundation::ConfigDiffPatcher*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_5F6516E9DB6A33D8_OFFSET))();
	}

	static ::System::Single Method_1_1B44FB549CC907DD_7()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_1B44FB549CC907DD_7_OFFSET))();
	}

	static ::System::String* Method_1_43A91FA91370FFB4_1(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_43A91FA91370FFB4_1_OFFSET))(a1);
	}

	static ::System::String* Method_1_E7FF0182A60EFD75()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_E7FF0182A60EFD75_OFFSET))();
	}

	static ::UnityEngine::Color Method_1_616C36F0B9D51885_3()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_616C36F0B9D51885_3_OFFSET))();
	}

	static ::MoleMole::ConfigGeneralIconBadgeColor* Method_1_68C96174839CE630(::System::Int32 a1)
	{
		return ((::MoleMole::ConfigGeneralIconBadgeColor*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_68C96174839CE630_OFFSET))(a1);
	}

	static ::UnityEngine::Color Method_1_616C36F0B9D51885_4()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_616C36F0B9D51885_4_OFFSET))();
	}

	static ::System::String* Method_1_43A91FA91370FFB4_2(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_43A91FA91370FFB4_2_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_975716F3207EFD8C_1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_975716F3207EFD8C_1_OFFSET))(a1);
	}

	static ::UnityEngine::AnimationCurve* Method_1_F7B5A3941878E340_1()
	{
		return ((::UnityEngine::AnimationCurve*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_F7B5A3941878E340_1_OFFSET))();
	}

	static ::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_FB4BE762B6186C23_OFFSET))();
	}

	static ::UnityEngine::Color Method_1_616C36F0B9D51885_5()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_616C36F0B9D51885_5_OFFSET))();
	}

	static ::MoleMole::AreaPositionConfig* Method_1_CDB6D8A85869878E(::System::Int32 a1)
	{
		return ((::MoleMole::AreaPositionConfig*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8F84CBAF7E25A53F_METHOD_1_CDB6D8A85869878E_OFFSET))(a1);
	}
};
