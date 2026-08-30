#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

namespace Sofa::Core { class SimpleCommand; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONVIEWMODEL_GET_BTNLIKECOMMAND_OFFSET UNITYSDK_OFFSET(0x1C5342F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONVIEWMODEL_GET_COMMENTNUM_OFFSET UNITYSDK_OFFSET(0x1C534260)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONVIEWMODEL_GET_ISLIKE_OFFSET UNITYSDK_OFFSET(0x1C534370)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONVIEWMODEL_GET_LIKENUM_OFFSET UNITYSDK_OFFSET(0x1C534900)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONVIEWMODEL_GET_NEEDTRANSITION_OFFSET UNITYSDK_OFFSET(0x1C534330)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONVIEWMODEL_GET_SHOWLIKENUM_OFFSET UNITYSDK_OFFSET(0x1C5342A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONVIEWMODEL_SET_BTNLIKECOMMAND_OFFSET UNITYSDK_OFFSET(0x1C534890)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONVIEWMODEL_SET_COMMENTNUM_OFFSET UNITYSDK_OFFSET(0x1C5345F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONVIEWMODEL_SET_ISLIKE_OFFSET UNITYSDK_OFFSET(0x1C534660)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONVIEWMODEL_SET_LIKENUM_OFFSET UNITYSDK_OFFSET(0x1C534580)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONVIEWMODEL_SET_NEEDTRANSITION_OFFSET UNITYSDK_OFFSET(0x1C534940)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONVIEWMODEL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C5346D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C534430)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsInteractionViewModel_TypeDefinitionIndex = 79093;

	class LimaoNewsInteractionViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::Sofa::Core::SimpleCommand* _BtnLikeCommand; // 0x20
		::System::Boolean _IsLike; // 0x28
		::System::Boolean _NeedTransition; // 0x29
		::System::UInt32 _LikeNum; // 0x2C
		::System::UInt32 _CommentNum; // 0x30

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::Sofa::Core::SimpleCommand* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONVIEWMODEL__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 get_CommentNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONVIEWMODEL_GET_COMMENTNUM_OFFSET))(this);
		}

		::System::Void set_CommentNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONVIEWMODEL_SET_COMMENTNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_ShowLikeNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONVIEWMODEL_GET_SHOWLIKENUM_OFFSET))(this);
		}

		::System::UInt32 get_LikeNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONVIEWMODEL_GET_LIKENUM_OFFSET))(this);
		}

		::System::Void set_LikeNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONVIEWMODEL_SET_LIKENUM_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLike()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONVIEWMODEL_GET_ISLIKE_OFFSET))(this);
		}

		::System::Void set_IsLike(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONVIEWMODEL_SET_ISLIKE_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_BtnLikeCommand()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONVIEWMODEL_GET_BTNLIKECOMMAND_OFFSET))(this);
		}

		::System::Void set_BtnLikeCommand(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONVIEWMODEL_SET_BTNLIKECOMMAND_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedTransition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONVIEWMODEL_GET_NEEDTRANSITION_OFFSET))(this);
		}

		::System::Void set_NeedTransition(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONVIEWMODEL_SET_NEEDTRANSITION_OFFSET))(this, a1);
		}
	};
}
